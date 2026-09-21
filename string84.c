#include <stdio.h>
int main(void)
{
    char string[1000];
    int i = 0;
    fgets(string, sizeof(string), stdin);
    while (string[i] != '\0') {
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] = string[i] - ('a' - 'A');
        }
        i++;
    }
    printf("%s", string);
    return 0;
}