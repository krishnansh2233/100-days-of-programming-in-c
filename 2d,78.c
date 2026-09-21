#include <stdio.h>

int main(void)
{
	int rows, columns;
	scanf("%d %d", &rows, &columns);

	int diagonal_sum = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			int value;
			scanf("%d", &value);
			if (i == j) {
				diagonal_sum += value;
			}
		}
	}

	printf("%d\n", diagonal_sum);
	return 0;
}
