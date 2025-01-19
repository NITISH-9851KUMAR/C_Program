

#include<stdio.h>
int main()
{ 
    int a,b,r;
    printf("enter the divident :");
    scanf("%d",&a);
    printf("enter the divisor :");
    scanf("%d",&b);
    // q=a/b;
    // r=a-b*q;
    // printf(" the  remainder when  %d:",r);
    r=a  % b;
    printf("thr value of remainder:%d",r);


return 0;
}