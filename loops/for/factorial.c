#include <stdio.h>
int main()
{
    int x;
    printf("Enter your number :");
    scanf("%d", &x);
    int power = 1;
    for (int i = 1; i <= x; i++)
    {
        power = power * i;
        printf("%d*",i);
        
    }
    printf("\n%d!=%d",x, power);
    return 0;
}