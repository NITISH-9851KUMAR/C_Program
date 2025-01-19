#include<stdio.h>
int main(){
    int x;
    printf("Enter your number :");
    scanf("%d",&x);
    int a,b,c,d,e;
    a=x%10;
    b=((x%100)-a)/10;
    c=((x%1000)-(a+b))/100;
    d=((x%10000)-(a+b+c))/1000;
    e=((x%100000)-(a+b+c+d))/10000;
    printf("%d%d%d%d%d",a,b,c,d,e);
    return 0;
}