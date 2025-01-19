#include <stdio.h>
int main()
{
    int n;
    printf("Enter line :");
    scanf("%d", &n);
    int nst=4;
    int nsp=1;
    for(int l=1;l<=n*2+1;l++){
        printf("*");
    }
      printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
          for(int j=1;j<=nst;j++){
            printf("*");
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}