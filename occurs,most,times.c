#include <stdio.h>
int main() {
    char number[100];
    int freq[10] = {0};
    int i;
    int maxCount = 0;
    int result = 0;
    scanf("%s", number);
    for (i = 0; number[i] != '\0'; i++) {
        if (number[i] >= '0' && number[i] <= '9') {
            freq[number[i] - '0']++;
        }
    }
    for (i = 0; i < 10; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            result = i;
        }
    }
    printf("%d\n", result);
    return 0;
}
