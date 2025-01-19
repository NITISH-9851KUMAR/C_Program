
#include<stdio.h>
int main()
{
    int a,b,q,r;
    printf("enter divident:");
    scanf("%d",&a);

    printf("enter divisor:");

    scanf("%d",&b);

    q=a/b;
      r=a-b*q;
    printf(" the  remainder when  %d:",r);
    

return 0;
}
