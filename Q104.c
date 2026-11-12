
#include <stdio.h>

int main()
{
    int n, x, left, right;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(x = 1; x <= n; x++)
    {
        left = x * (x + 1) / 2;
        right = (n * (n + 1) / 2) - 
                ((x - 1) * x / 2);

        if(left == right)
        {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");

    return 0;
}
