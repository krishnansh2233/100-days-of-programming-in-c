
#include <stdio.h>

int main()
{
    int nums[100], n, target;
    int i, first = -1, last = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++)
    {
        if(nums[i] == target)
        {
            if(first == -1)
            {
                first = i;
            }

            last = i;
        }
    }

    printf("%d,%d", first, last);

    return 0;
}
