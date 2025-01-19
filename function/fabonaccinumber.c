#include <stdio.h>
int fabonacci(int m)
{
    int a = 1;
    int b = 1;
    int sum = 0;
    printf("%d %d", a, b);
    for (int i = 1; i <= m - 2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        printf(" %d", sum);
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter your turn :");
    scanf("%d", &n);
    fabonacci(n);
    return 0;
}