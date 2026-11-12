#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static size_t hash_int(int value, size_t capacity)
{
	uint32_t x = (uint32_t)value;
	x ^= x >> 16;
	x *= UINT32_C(0x7feb352d);
	x ^= x >> 15;
	x *= UINT32_C(0x846ca68b);
	x ^= x >> 16;
	return (size_t)x & (capacity - 1);
}

static int print_duplicate(int value, int *keys, unsigned char *used,
						   size_t capacity)
{
	size_t index = hash_int(value, capacity);
	while (used[index] && keys[index] != value)
		index = (index + 1) & (capacity - 1);

	if (used[index]) {
		printf("%d\n", value);
		return 1;
	}

	keys[index] = value;
	used[index] = 1;
	return 0;
}

int main(void)
{
	char input[1000000];
	size_t length = fread(input, 1, sizeof(input) - 1, stdin);
	input[length] = '\0';

	char *start = strchr(input, '[');
	char *end = start == NULL ? NULL : strchr(start, ']');
	size_t count = 0;

	if (start != NULL && end != NULL) {
		for (char *p = start + 1; p < end; ++p) {
			if (*p == '-' || (*p >= '0' && *p <= '9')) {
				char *next;
				(void)strtol(p, &next, 10);
				if (next != p) {
					++count;
					p = next - 1;
				}
			}
		}
		start++;
	} else {
		long n;
		if (sscanf(input, "%ld", &n) != 1 || n <= 0)
			return 0;
		count = (size_t)n;
		start = input;
		while (*start && (*start < '0' || *start > '9') && *start != '-')
			++start;
		char *next;
		(void)strtol(start, &next, 10);
		start = next;
	}

	if (count == 0 || count > (SIZE_MAX - 1) / 2)
		return 0;

	size_t capacity = 1;
	while (capacity < count * 2 + 1) {
		if (capacity > SIZE_MAX / 2)
			return 1;
		capacity *= 2;
	}

	int *keys = malloc(capacity * sizeof(*keys));
	unsigned char *used = calloc(capacity, sizeof(*used));
	if (keys == NULL || used == NULL) {
		free(keys);
		free(used);
		return 1;
	}

	for (size_t i = 0; i < count; ++i) {
		char *next;
		long value;
		while (*start && ((*start < '0' || *start > '9') && *start != '-'))
			++start;
		value = strtol(start, &next, 10);
		if (next == start || value < INT32_MIN || value > INT32_MAX)
			break;
		start = next;
		if (print_duplicate((int)value, keys, used, capacity)) {
			free(keys);
			free(used);
			return 0;
		}
	}

	free(keys);
	free(used);
	return 0;
}
