#include<stdio.h>
int main(){
    int a;
    printf("Enter a : ");
    scanf("%d",&a);
    int b;
    printf("Enter b :");
    scanf("%d",&b);
    int c=a;
    int d=b;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Before swapint a:%d b:%d",c,d);
    printf("\nAfter swapint  a:%d b:%d",a,b);
    return 0;
}