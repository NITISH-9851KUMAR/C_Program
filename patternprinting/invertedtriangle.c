#include<stdio.h>
int main(){
    int n;
    printf("enter your line :");
    scanf("%d",&n);
    int nst=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        nst--;
        printf("\n");
    }
    return 0;
}