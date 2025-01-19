#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
} 
int main(){
    int n;
    printf("enter no of line :");
    scanf("%d",&n);
    int nsp=n;
    for(int i=0;i<=n;i++){
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            int icj=factorial(i)/(factorial(j)*factorial(i-j));
            printf("%d ",icj);
        }
        nsp--;
        printf("\n");
    }
    return 0;
}