#include <stdio.h>
int main()
{
    int n;
    printf("Enter no of lies :");
    scanf("%d", &n);
    int b = n;
    int nsp = 1;
 
    for (int i = 1; i <= n; i++)
    {
           int nst=3;
    
        for (int j = 1; j <= b; j++)
        {
            printf("%d", j);
        }
        b--;
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
        }
        nsp = +2;
        {
            for (int l = 1; l <= n; l++)
            {
                printf("%d", nst);
         nst--;
            }
            
        }
        printf("\n");
    }
    return 0;
}