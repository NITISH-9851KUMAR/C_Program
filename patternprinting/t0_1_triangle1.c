#include <stdio.h>
int main()
{
    int n;
    printf("Enter no of rows:");
    scanf("%d", &n);
    int a;
    for (int i = 1; i <= n; i++)
    {
        if(i%2!=0) a=1;// start number kaha se karna hai 
        else a=0;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",a);
            if(a==0) a=1; // switch karne wali line hai 
            else a=0; // agar a=1 to a 0 hoga jayge nahim to reverse 
        }
        printf("\n");
    }
    return 0;
}