#include<stdio.h>
int main(){
    int n;
    printf("Enter no of lines :");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    for(int i=1;i<=n*2+1;i++){
        printf("*");
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){ //for stars 
            printf("*");
        }
        for(int k=1;k<=nsp;k++){ // for spaces 
            printf(" ");
        }
        for(int m=1;m<=nst;m++){
            printf("*");
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}