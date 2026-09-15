#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    for (int number = 2; number <= n; number++) {
        int is_prime = 1;
        for (int divisor = 2; divisor * divisor <= number; divisor++) {
            if (number % divisor == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("%d ", number);
        }
    }
    return 0;
}