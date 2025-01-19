#include<stdio.h>
int main(){
    int a;
    printf("Enter a :");
    scanf("%d",&a);
    int b;
    printf("Enter b :");
    scanf("%d",&b);
    int c=a,d=b;
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("Before swaping = a:%d   b:%d",c,d);
    printf("\nAfter swaping = a:%d  b:%d",a,temp);
    return 0;
}