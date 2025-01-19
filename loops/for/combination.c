#include <stdio.h>
int main()
{
    int n;
    printf("Enter n :");
    scanf("%d", &n);
    int r;
    printf("Enter r :");
    scanf("%d", &r);
    int factn = 1;
    for (int i = 1; i <= n; i++) // ise n! ka value nikal jayega
    {
        factn = factn * i;
    }
    int factr = 1;
    for (int i = 1; i <= r; i++) // ise r! ka value nikal jayega
    {
        factr = factr * i;
    }
    int factnr = 1;
    for (int i = 1; i <= n - r; i++) // ise n-r! ka value nikal jayega
    {
        factnr = factnr * i;
    }
    int value = factn / (factr * factnr);
    printf(" %d C %d :%d", n, r, value);
    return 0;
}