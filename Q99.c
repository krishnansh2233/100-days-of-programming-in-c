
#include <stdio.h>

int main()
{
    char date[20];

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

    if(date[3] == '0' && date[4] == '4')
    {
        printf("%.2s-Apr-%s", date, date + 6);
    }

    return 0;
}
