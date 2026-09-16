#include <stdio.h>

int main()
{
    int m, n;

    printf("enter size of matrix: ");
    scanf("%d %d", &m, &n);
    int a[m][n];

    printf("enter elements of matrix:\n");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if(m != n)
    {
        printf("False");
    }
    else
    {
        int flag = 1;

        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(a[i][j] != a[j][i])
                {
                    flag = 0;
                }
            }
        }

        if(flag == 1)
        {
            printf("Matrix is symmetric. ");
        }
        else
        {
            printf("Matrix is not symmetric.");
        }
    }
    return 0;
}