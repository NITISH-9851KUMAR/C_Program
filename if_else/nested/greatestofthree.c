#include <stdio.h>
int main()
{
    int a;
    printf("Enter your 1st number :");
    scanf("%d", &a);
    int b;
    printf("Enter your 1st number :");
    scanf("%d", &b);
    int c;
    printf("Enter your 1st number :");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
            printf("%d is greater ", a);
        else
            printf("%d is greater ", c);
    }
    if (b > a)
    {
        if (b > c)
            printf("%d is greatest", b);
        else
            printf("%d is greatest ", c);
    }
    return 0;
}