#include<stdio.h>
int main(){
    int n;
    printf("enter no of line :");
    scanf("%d",&n);
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        nsp--;
        printf("\n");
    }
    return 0;
}