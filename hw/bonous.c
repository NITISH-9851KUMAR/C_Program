#include <stdio.h>
int mian()
{
    int x;
    printf("Enter Year of employee :");
    scanf("%d", &x);
    if (x > 3)
    {
        printf("Employees get bonous 2500");
    }
    else
        printf("Employees work less 3 year in componay");
    return 0;
}