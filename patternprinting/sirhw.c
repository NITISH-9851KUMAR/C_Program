#include <stdio.h>
int main()
{
    int n;
    printf("Enter no of lines :");
    scanf("%d", &n);
    int a = 1;
    int b = n;
    int c=n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", a);
        }
        a++;
        printf("\n");
    }
    printf("\n");
   for(int i=1;i<=n;i++){
    for(int j=1;j<=b;j++){
        printf("%d",c);
    }
    b--;
    c--;
    printf("\n");
   }
    return 0;
}