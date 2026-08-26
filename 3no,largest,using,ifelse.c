#include <stdio.h>
int main(void)
{
    int a, b, c, largest;
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;
    printf("Largest is %d\n", largest);
    return 0;
}