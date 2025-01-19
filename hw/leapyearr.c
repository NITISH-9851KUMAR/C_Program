#include <stdio.h>
int main()
{
    int x;
    printf("Enter year :");
    scanf("%d", &x);
    if (x % 100 == 0)
    {
        if (x % 400 == 0)
            printf("%d is leap year", x);
        else
            printf("%d is not leap year ", x);
    }
    else if (x % 4 == 0)
        printf("%d is  leap year ", x);

    else
        printf("%d is not leap year", x);
    return 0;
}