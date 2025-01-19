#include <stdio.h>
int main()
{
    int n;
    printf("Enter no of rows :");
    scanf("%d", &n);
    int a = 1;
    int b=1;
    for (int i = 1; i <= n-2; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("%d",b);
        }
        printf("\n");
        for (int j = 1; j <= 5; j++)
        {
            printf("%d", a);
        }
        b--;
        printf("\n");
    }
    return 0;
}