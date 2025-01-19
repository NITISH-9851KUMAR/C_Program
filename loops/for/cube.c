#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter your base power:");
    scanf("%d %d", &a, &b);
    int power = 1;
    for (int i = 1; i <= b; i++)
    {
        power = power * a;
    }
    printf("The base%d power %d:%d ", a, b, power);
    return 0;
}