#include <stdio.h>
int main()
{
    int x;
    printf("Enter number :");
    scanf("%d", &x);
    if (x % 11 == 0)
        printf("%d is divisible by 11", x);

    else
        printf("%d is not divisible by 11", x);
    return 0;
}