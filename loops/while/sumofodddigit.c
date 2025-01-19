#include <stdio.h>
int main()
{
    int x;
    printf("Enter Input :");
    scanf("%d", &x);
    int lastdigit, sum;
    sum = 0;
    while (x != 0)
    {
        lastdigit = x % 10;
        if (lastdigit % 2 != 0)
            sum = sum + lastdigit;
        x = x / 10;
    }
    printf("The sum of digit:%d", sum);
    return 0;
}