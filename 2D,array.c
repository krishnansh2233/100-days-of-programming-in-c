#include <stdio.h>

int main(void)
{
	int rows, columns;
	scanf("%d %d", &rows, &columns);

	int matrix[rows][columns];

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (j > 0) {
				printf(" ");
			}
			printf("%d", matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}
