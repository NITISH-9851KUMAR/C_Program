#include <stdio.h>
int main()
{
    int x;
    printf("Enter input :");
    scanf("%d", &x);
    int product = 1;
    for (int i = 1; i <= x; i++)
    {
        product = product * i;
        printf("\nThe factorial value of %d:%d", i, product);
    }
    return 0;
}