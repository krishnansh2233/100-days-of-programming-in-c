
#include <stdio.h>

int main()
{
    char str[100], ch;
    int i, count = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
