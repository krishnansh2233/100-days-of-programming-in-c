#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int rows, cols;

	if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0)
		return 1;

	int (*matrix)[cols] = malloc((size_t)rows * sizeof(*matrix));
	if (matrix == NULL)
		return 1;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (scanf("%d", &matrix[i][j]) != 1) {
				free(matrix);
				return 1;
			}
		}
	}

	int diagonal_size = rows < cols ? rows : cols;
	int distinct = 1;

	for (int i = 0; i < diagonal_size && distinct; i++) {
		for (int j = i + 1; j < diagonal_size; j++) {
			if (matrix[i][i] == matrix[j][j]) {
				distinct = 0;
				break;
			}
		}
	}

	printf("%s\n", distinct ? "True" : "False");
	free(matrix);
	return 0;
}
