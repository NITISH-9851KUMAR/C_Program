#include<stdio.h>
int main(){
    int n;
    printf("Enter no of rows :");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    int c=65;
    for(int i=1;i<=n*2+1;i++){
        printf("%c",c);
        c++;
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        int a=65;
        for(int j=1;j<=nst;j++){
            printf("%c",a);
            a++;
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
            a++;
        }
        for(int l=1;l<=nst;l++){
            printf("%c",a);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");

    }
    return 0;
}