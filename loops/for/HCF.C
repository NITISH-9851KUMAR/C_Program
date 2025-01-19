#include <stdio.h>
int main()
{
    int n, m, gcd;
    printf("Ente two number :");
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n && i <= m; i++)
    {
        if (n % i == 0 && m % i == 0)
            gcd = i;
    }
    printf("The HCF of %d and %d :  %d", n, m,gcd);
    return 0;
}