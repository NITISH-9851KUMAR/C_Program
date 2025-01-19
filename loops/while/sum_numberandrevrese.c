#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter Input :");
    scanf("%d", &x);
    int lastdigit;
    int r = 0;
    y = x + r;
    while (x != 0)
    {
        r = r * 10;
        r = r + (x % 10);
        x = x / 10;
    }
    z = y + r;
    printf("The revrse number :%d", r);
    printf("\nThe sum of number and reverse:%d", z);
    return 0;
}