#include<stdio.h>
int factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
        printf("%d ",i);

    }
    printf("\nThe value of  %d!:%d",a,fact);
    return fact;
}
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    factorial(n);
    return 0;
}