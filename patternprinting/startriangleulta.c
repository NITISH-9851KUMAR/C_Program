#include<stdio.h>
int main(){
    int n;
    printf("Enter no of lines :");
    scanf("%d",&n);
    int nst=n;
    int nsp=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        nst-=2;
        nsp++;
        printf("\n");
    }
    return 0;
}