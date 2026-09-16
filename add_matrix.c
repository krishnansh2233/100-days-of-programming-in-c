#include <stdio.h>

int main()
{
    int m,n;
    int p,q;

    printf("enter size of 1st matrix: ");
    scanf("%d %d", &m, &n);

    printf("enter size of 2nd matrix: ");
    scanf("%d %d", &p, &q);

    int a[m][n];
    int b[p][q];

    printf("enter elements of 1st matrix:\n");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter elements of 2nd matrix:\n");
    for(int r = 0; r < p; r++)
    {
        for(int s = 0; s < q; s++)
        {
            scanf("%d", &b[r][s]);
        }
    }

    if(m == p && n == q)
    {
        int f[m][n];

        for(int h = 0; h < m; h++)
        {
            for(int l = 0; l < n; l++)
            {
                f[h][l] = a[h][l] + b[h][l];
            }
        }

        printf("sum of matrices:\n");

        for(int h = 0; h < m; h++)
        {
            for(int l = 0; l < n; l++)
            {
                printf("%d ", f[h][l]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrices cannot be added");
    }

    return 0;
}