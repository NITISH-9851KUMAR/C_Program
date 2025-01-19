#include<stdio.h>
int facto(int n){
    if(n==0|| n==1) return 1;
    return n*facto(n-1);
}
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int x=facto(n);
    printf("%d!:%d",n,x);
    return 0;
}