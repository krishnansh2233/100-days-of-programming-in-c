#include <stdio.h>

int main(void)
{
	char string[1000];
	int count = 0;

	if (fgets(string, sizeof(string), stdin) != NULL) {
		while (string[count] != '\0' && string[count] != '\n') {
			count++;
		}
	}

	printf("%d\n", count);
	return 0;
}
