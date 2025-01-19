#include<stdio.h>
int main(){
    int n;
    printf("Enter number of lines :");
    scanf("%d",&n);
    //1234567
    //123 567
    //12   67
    //1     7
    //n=3
    int nsp=1;
    int nst=n;
    for(int l=1;l<=n*2+1;l++){
        printf("%d",l);
    }
    printf("\n");
    for(int i=1;i<=4;i++){
        int a=1;
        for(int j=1;j<=nst;j++){
            printf("%d",a);
            a++;
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
            a++;
        }
        for(int j=1;j<=nst;j++){
            printf("%d",a);
            a++;
        }
        nsp+=2;
        nst--;
        printf("\n");
    }
    return 0;
}