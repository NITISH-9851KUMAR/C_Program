#include <stdio.h>
int main()
{
    int a, b, lcm, gcd;
    printf("\nEnter 1st number :");
    scanf("%d", &a);
    printf("Enter 2nd number :");
    scanf("%d", &b);
    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    lcm = (a * b) / gcd;
    printf("LCM =%d", lcm);
    printf("\nHCF=%d", gcd);
    return 0;
}