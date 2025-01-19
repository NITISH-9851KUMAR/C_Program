#include <stdio.h>
int main()
{
    int n;
    printf("enter no of line :");
    scanf("%d", &n);
    int nst = 1;
    for (int i = 1; i <= n * 2-1; i++)
    {
    for(int j=1;j<=nst;j++){
        printf("*");
    }
    if(i<n){
        nst++;
    }
    else {
        nst--;
    }
    printf("\n");
    }
    return 0;
}