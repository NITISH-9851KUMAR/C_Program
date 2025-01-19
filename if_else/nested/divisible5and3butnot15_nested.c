#include <stdio.h>
int main()
{
    int x;
    printf("Enter your number :");
    scanf("%d", &x);
    if (x % 5 == 0 || x % 3 == 0)
    {
        if (x % 15 != 0)
        {
            printf("This number divisible by 5 or 3 and not 15");
        }
        else
        {
            printf("the number is divisibile by 15");
        }
    }
    else
    {
        printf("the number is not divisible by 5 or 3");
    }

    return 0;
}