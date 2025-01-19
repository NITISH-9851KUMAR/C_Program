#include <stdio.h>
int main()
{
    int x;
    printf("Enter number :");
    scanf("%d", &x);
    int power;
    int ld;
    int y = 0;
    int z = x;
    while (x != 0)
    {
        ld = x % 10;
        power = ld * ld * ld;
        y = power + y;
        x = x / 10;
    }
    if (z == y)
        printf("This is armostrant numebr ");
    else
        printf("This is not armostrang value\nThe sum of qube digit :%d ",y);
    return 0;
}