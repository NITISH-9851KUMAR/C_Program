#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter base and power :");
    scanf("%d %d", &a, &b);
    int power = 1;
    for (int i = 1; i <= b; i++)
    {
        power = power * a;
    }
    printf("The power :%d", power);
    return 0;
}