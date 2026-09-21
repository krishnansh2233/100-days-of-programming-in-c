#include <stdio.h>
int main(void) {
	int rows, columns;
	if (scanf("%d %d", &rows, &columns) != 2 || rows <= 0 || columns <= 0) {
		return 0;
	}
	int matrix[rows][columns];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}
	int first = 1;
	for (int sum = 0; sum < rows + columns - 1; sum++) {
		int first_row = sum < columns ? 0 : sum - columns + 1;
		int last_row = sum < rows ? sum : rows - 1;

		if (sum % 2 == 0) {
			for (int row = last_row; row >= first_row; row--) {
				if (!first) printf(" ");
				printf("%d", matrix[row][sum - row]);
				first = 0;
			}
		} else {
			for (int row = first_row; row <= last_row; row++) {
				if (!first) printf(" ");
				printf("%d", matrix[row][sum - row]);
				first = 0;
			}
		}
	}
	printf("\n");
	return 0;
}
