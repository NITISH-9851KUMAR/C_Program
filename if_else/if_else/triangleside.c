#include <stdio.h>
int main()
{
    int a;
    printf("Enter your 1st side :");
    scanf("%d", &a);
    int b;
    printf("Enter your 2nd side :");
    scanf("%d", &b);
    int c;
    printf("Enter your 3rd side :");
    scanf("%d", &c);
    if ((a + b) > c && (a + c) > b && (b + c) > a)
    {
        printf("The side of triangle side ");
    }
    else
    {
        printf("The side of not triangle side ");
    }

    return 0;
}