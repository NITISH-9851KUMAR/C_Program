#include<stdio.h>
int factorial(int n){
    if(n==0|| n==1) return 1;
    return n*factorial(n-1);
}
int main(){
    int n;
    printf("Enter your numbr :");
    scanf("%d",&n);
    int x=factorial(n);
    printf("%d!:%d",n,x);
    return 0;
}