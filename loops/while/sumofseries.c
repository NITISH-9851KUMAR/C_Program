#include <stdio.h>
int main()
{
    int x, sum = 0;
    printf("Enter Input :");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    // 1-2+3-4+5-6+7
    {
        if (i % 2 == 0)
            sum = sum - i;
        else
            sum = sum + i;
    }
    printf("The sum is : %d", sum);

    return 0;
}