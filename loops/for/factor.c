#include <stdio.h>
int main()
{
    int x;
    printf("Enter Number :");
    scanf("%d", &x);
    printf("Factor of %d : ", x);
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
            printf("%d ", i);
    }

    return 0;
}