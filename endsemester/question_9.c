#include <stdio.h>
int fabbo(int x)
{
    int a = 1, b = 1;
    int sum = 0;
    for (int i = 1; i <= x - 2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        printf("%d ", sum);
    }
}
int main()
{
    int n;
    printf("Enter your number :");
    scanf("%d", &n);

    int add = fabbo(n);

    return 0;
}