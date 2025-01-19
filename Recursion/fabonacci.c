#include<stdio.h>
int fabbo(int n){
    if(n==1 || n==2) return 1;
    return fabbo(n-1)+fabbo(n-2);
}
int main(){
    int n;
    printf("Enter your turn :");
    scanf("%d",&n);
    int x=fabbo(n);
    printf("The %dth term :%d",n,x);
    return 0;
}

