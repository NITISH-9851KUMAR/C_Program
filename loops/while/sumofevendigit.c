#include <stdio.h>
int main()
{
    int x;
    printf("Enter Number :");
    scanf("%d", &x);
    int lastdigit;
    int sum = 0;
    int summ=1;
    while (x != 0)
    {
        lastdigit = x % 10;
        if (lastdigit % 2 == 0)
            sum = sum + lastdigit;
        else
            summ = summ + lastdigit;
        x = x / 10;
    }
    printf("The sum of even digit:%d", sum);
    printf("\nThe sum of odd digit:%d",summ);
    return 0;
}