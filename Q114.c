#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char input[100000];
	if (fgets(input, sizeof(input), stdin) == NULL)
		return 0;

	char *text = strchr(input, '"');
	if (text != NULL) {
		++text;
		char *quote = strchr(text, '"');
		if (quote != NULL)
			*quote = '\0';
	} else {
		text = strchr(input, '=');
		text = (text != NULL) ? text + 1 : input;
		while (isspace((unsigned char)*text))
			++text;
		char *end = text + strlen(text);
		while (end > text && isspace((unsigned char)end[-1]))
			*--end = '\0';
	}

	int last_seen[256];
	for (int i = 0; i < 256; ++i)
		last_seen[i] = -1;

	int left = 0;
	int longest = 0;
	for (int right = 0; text[right] != '\0'; ++right) {
		unsigned char ch = (unsigned char)text[right];
		if (last_seen[ch] >= left)
			left = last_seen[ch] + 1;
		last_seen[ch] = right;

		int length = right - left + 1;
		if (length > longest)
			longest = length;
	}

	printf("%d\n", longest);
	return 0;
}
