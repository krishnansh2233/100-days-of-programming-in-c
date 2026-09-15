#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int target;
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        if (array[i] == target) {
            printf("Found at index %d\n", i);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}