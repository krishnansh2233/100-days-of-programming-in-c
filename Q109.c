#include <stdio.h>

int main()
{
    int arr[100], n, k, i;
    long long sum = 0, maxSum;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    if(k <= 0 || k > n)
    {
        printf("-1");
        return 0;
    }

    for(i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    maxSum = sum;

    for(i = k; i < n; i++)
    {
        sum = sum + arr[i] - arr[i - k];

        if(sum > maxSum)
        {
            maxSum = sum;
        }
    }

    printf("%lld", maxSum);

    return 0;
}