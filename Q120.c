#include <ctype.h>
#include <stdio.h>

int main(void)
{
	char str[1000];

	if (fgets(str, sizeof(str), stdin) == NULL) {
		return 0;
	}

	int start_of_word = 1;
	for (int i = 0; str[i] != '\0'; i++) {
		unsigned char ch = (unsigned char)str[i];

		if (isalpha(ch)) {
			str[i] = start_of_word ? (char)toupper(ch) : (char)tolower(ch);
			start_of_word = 0;
		} else if (isspace(ch)) {
			start_of_word = 1;
		}
	}

	printf("%s", str);
	return 0;
}
