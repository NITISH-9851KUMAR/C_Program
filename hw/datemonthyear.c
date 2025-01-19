#include <stdio.h>
int main()
{
    int date, month, year;
    printf("Enter date :");
    scanf("%d", &date);
    printf("Enter month :");
    scanf("%d", &month);
    printf("Enter year :");
    printf("%d/%d/%d\n", date, month, year);
    if (date > 0 && date < 31 && month > 0 && month < 12 && 999 < year && year < 10000)
    {
        printf("%d/%d/%d is true", date, month, year);
    }
    else
        printf("%d/%d/%d not date,month,year", date, month, year);
    return 0;
}