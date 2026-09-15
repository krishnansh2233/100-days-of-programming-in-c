#include <stdio.h>

int main() {
    int rows, cols, i, j, sum = 0;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("%d", sum);
    return 0;
}
