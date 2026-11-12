#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[100001], t[100001];
	int counts[26] = {0};

	if (scanf("%100000s %100000s", s, t) != 2)
		return 0;

	if (strlen(s) != strlen(t)) {
		printf("Not Anagram\n");
		return 0;
	}

	for (size_t i = 0; s[i] != '\0'; ++i) {
		++counts[s[i] - 'a'];
		--counts[t[i] - 'a'];
	}

	for (int i = 0; i < 26; ++i) {
		if (counts[i] != 0) {
			printf("Not Anagram\n");
			return 0;
		}
	}

	printf("Anagram\n");
	return 0;
}
