#include <stdio.h>
int main() {
    int n, i;
    int even = 0, odd = 0;
    int arr[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    printf("Even=%d, Odd=%d", even, odd);
    return 0;
}
