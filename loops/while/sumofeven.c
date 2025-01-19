#include <stdio.h>
int main()
{
    int x;
    printf("Enter input :");
    scanf("%d", &x);
    int sum = 0;
    for (int i = 2; i <= x; i=i+2)
    {
        sum = sum + i;
    }
    printf("The sum of even :%d", sum);

    return 0;
}