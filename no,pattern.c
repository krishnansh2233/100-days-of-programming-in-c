#include <stdio.h>

int main(void)
{
	for (int row = 1; row <= 5; row++) {
		for (int number = 1; number <= row; number++) {
			printf("%d", number);
		}
		printf("\n");
	}

	return 0;
}
