#include <stdio.h>
int main(void)
{
    int number;
    scanf("%d", &number);
    if (number >= 0)
    {
        if (number == 0)
            printf("Zero");
        else
            printf("Positive");
    }
    else
    {
        printf("Negative");
    }
    return 0;
}