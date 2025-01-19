#include <stdio.h>
int gcd(int x, int y)
{
    int gcd;
    for (int i = 1; i <= x && i <= y; i++)
    {
        if (x % i == 0 && y % i == 0)
            gcd = i;
    }
    return gcd;
}
int main()
{
    int a, b;
    printf("enter two no : ");
    scanf("%d %d", &a, &b);
    int hcf = gcd(a, b);
    printf("HCF of %d and %d : %d",a,b,hcf);
    return 0;
}