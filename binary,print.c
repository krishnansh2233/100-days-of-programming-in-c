#include <stdio.h>

int main(void)
{
	char binary[100];

	scanf("%99s", binary);

	for (int i = 0; binary[i] != '\0'; ++i) {
		binary[i] = (binary[i] == '0') ? '1' : '0';
	}

	printf("%s\n", binary);
	return 0;
}
