#include <stdio.h>
int main() {
    int n, i, x, pos = 0;
    scanf("%d", &n);
    int arr[n + 1];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    while (pos < n && arr[pos] < x) {
        pos++;
    }
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = x;
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
