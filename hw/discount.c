#include <stdio.h>
int main()
{
    int x, z;
    float y;
    printf("price of things :");
    scanf("%d", &x);
    if (x > 1000)
    {
        y = x * 10.0 / 100.0;
        printf("Discount of things :%f", y);
        z = x - y;
        printf("\nThe Real  price of things :%d", z);
    }
    if (x < 1000)
    {
        printf("The things's price  is less then 1000");
        
    }

    return 0;
}