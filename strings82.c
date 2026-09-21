#include <stdio.h>
int main(void)
{
	char string[1000];
	if (fgets(string, sizeof(string), stdin) == NULL) {
		return 0;
	}
	for (int i = 0; string[i] != '\0' && string[i] != '\n'; i++) {
		printf("%c\n", string[i]);
	}
	return 0;
}
