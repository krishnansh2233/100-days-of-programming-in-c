#include <stdio.h>

int main(void)
{
	int row;

	for (row = 1; row <= 4; row++) {
		for (int space = 0; space < 4 - row; space++)
			printf(" ");
		for (int star = 0; star < 2 * row - 1; star++)
			printf("*");
		printf("\n");
	}

	for (row = 3; row >= 1; row--) {
		for (int space = 0; space < 4 - row; space++)
			printf(" ");
		for (int star = 0; star < 2 * row - 1; star++)
			printf("*");
		printf("\n");
	}

	return 0;
}
