#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define LIMIT 100000

static int read_array(const char **p, int values[], int *count)
{
	*count = 0;
	while (**p != '\0' && **p != '[')
		++*p;
	if (**p != '[')
		return 0;
	++*p;

	while (**p != '\0' && **p != ']') {
		while (**p != '\0' && **p != ']' && !isdigit((unsigned char)**p) &&
			   **p != '-' && **p != '+')
			++*p;
		if (**p == '\0' || **p == ']')
			break;
		char *end;
		long value = strtol(*p, &end, 10);
		if (end == *p || *count >= LIMIT)
			return 0;
		values[(*count)++] = (int)value;
		*p = end;
	}
	return **p == ']';
}

int main(void)
{
	int first[LIMIT], second[LIMIT];
	int m, n;
	char input[1000000];
	size_t length = 0;
	int ch;

	while ((ch = getchar()) != EOF && length + 1 < sizeof(input))
		input[length++] = (char)ch;
	input[length] = '\0';

	const char *p = input;
	while (isspace((unsigned char)*p))
		++p;

	if (*p == 'n' || *p == '[') {
		if (!read_array(&p, first, &m) || !read_array(&p, second, &n))
			return 1;
	} else {
		if (scanf("%d %d", &m, &n) != 2 || m < 0 || n < 0 ||
			m > LIMIT || n > LIMIT)
			return 1;
		for (int i = 0; i < m; ++i)
			if (scanf("%d", &first[i]) != 1)
				return 1;
		for (int i = 0; i < n; ++i)
			if (scanf("%d", &second[i]) != 1)
				return 1;
	}

	int i = 0, j = 0;
	while (i < m && j < n) {
		if (first[i] <= second[j])
			printf("%d ", first[i++]);
		else
			printf("%d ", second[j++]);
	}
	while (i < m)
		printf("%d ", first[i++]);
	while (j < n)
		printf("%d ", second[j++]);
	putchar('\n');
	return 0;
}
