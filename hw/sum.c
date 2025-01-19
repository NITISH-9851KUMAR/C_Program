#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    int sum = 0;
    for (int i = 1; i <= x; i++)
    {
        sum = sum + i;
    }
    printf("Total sum :%d", sum);
    return 0;
}