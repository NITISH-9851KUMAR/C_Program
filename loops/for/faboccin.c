#include <stdio.h>
int main()
{
    int x;
    printf("Enter your turn :");
    scanf("%d", &x);
    int a = 1;
    int b = 1;
    int sum = 1;
    for (int i = 1; i <= x - 2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    printf("The %dth turn is: %d", x, sum);
    return 0;
}