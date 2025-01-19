
#include<stdio.h>
int main()
{
    int a,b,q,r;
    printf("enter divident:");
    scanf("%d",&a);

    printf("enter divisor:");

    scanf("%d",&b);

    q=b/a;
    r=a-b*q;
    printf(" the value of remainder :%d",r);
    

return 0;
}
