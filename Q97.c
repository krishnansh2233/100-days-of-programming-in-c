
#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter your name: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(i == 0 || str[i - 1] == ' ')
        {
            if(str[i] != ' ' && str[i] != '\n')
            {
                printf("%c.", str[i]);
            }
        }
    }

    return 0;
}
