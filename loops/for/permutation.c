#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    int r;
    printf("Enter r:");
    scanf("%d", &r);
    int factn = 1;
    for (int i = 1; i <= n; i++) // n!  ka value niklega
    {
        factn = factn * i;
    }
    int factr = 1;
    for (int i = 1; i <= r; i++) // r! ka value niklega
    {
        factr = factr * i;
    }
    int factnr = 1;
    for (int i = 1; i <= n - r; i++) // n-r! ka value niklega
    {
        factnr = factnr * i;
    }
    int npr = factn / (factnr);
    printf("%d P %d :%d",n,r, npr);
    return 0;
}