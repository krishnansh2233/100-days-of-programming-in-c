
#include <stdio.h>

int main()
{
    char str[100];
    int i, last = 0;

    printf("Enter your name: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            last = i + 1;
        }
    }

    for(i = 0; i < last - 1; i++)
    {
        if(i == 0 || str[i - 1] == ' ')
        {
            printf("%c.", str[i]);
        }
    }

    printf(" %s", str + last);

    return 0;
}
