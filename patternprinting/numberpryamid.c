#include <stdio.h>
int main()
{
    int n;
    printf("Enter no of lines :");
    scanf("%d", &n);
    for (int i = 1; i <= n * 2 + 1; i++)
    {
        printf("%d", i);
    }
    printf("\n");
    int nst = n;
    int nsp = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            printf("%d", j);
        }

        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
        }
        for (int m = 1; m <= nst; m++)
        {
            printf("%d", m);
        }
        nst--;
        nsp += 2;
        printf("\n");
    }

    return 0;
}