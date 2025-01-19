#include <stdio.h>
int main()
{
    int n;
    printf("Enter no of rows:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++) // space ke liye
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) // number triangle
        {
            printf("%d", j);
        }
        int a = i - 1; // extra ke liye 
        for (int q = 1; q <= i - 1; q++)
        {
            printf("%d", a);
            a--;
        }
        printf("\n");
    }
    return 0;
}