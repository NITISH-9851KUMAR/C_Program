#include <stdio.h>
int main()
{
    int n;
    printf("Enter no. of rows :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        int a = 65;
        for (int j = 1; j <= i; j++)
        {
            printf("%c", a);
            a++;
        }
        int b = 64 + i - 1;
        for (int l = 1; l <= i - 1; l++)
        {
            printf("%c", b);
            b++;
        }

        printf("\n");
    }
    return 0;
}