#include <stdio.h>

int main()
{
    int nums[100], n, i;
    long long answer[100], prefix = 1, suffix = 1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for(i = 0; i < n; i++)
    {
        answer[i] = prefix;
        prefix = prefix * nums[i];
    }

    for(i = n - 1; i >= 0; i--)
    {
        answer[i] = answer[i] * suffix;
        suffix = suffix * nums[i];
    }

    printf("[");

    for(i = 0; i < n; i++)
    {
        printf("%lld", answer[i]);

        if(i < n - 1)
        {
            printf(",");
        }
    }

    printf("]");

    return 0;
}