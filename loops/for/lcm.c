#include <stdio.h>
int main()
{
    int n, m, lcm, gcd;
    printf("Enter two number :");
    scanf("%d %d", &n, &m); 
    for (int i = 1; i <= n && i <= m; i++)
    {
        if ((n % i == 0) && (m % i == 0))
            gcd = i;
        lcm = (n * m) / gcd;
    }
    printf("The lcm of two numerb:%d", lcm);
    return 0;
}