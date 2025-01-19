#include <stdio.h>
int main()
{
    int x, da, hra,gs;
    printf("Enter Ramesh basic salary :");
    scanf("%d",&x);
    da=x*0.4;
    hra=x*0.2;
    gs=x+da+hra;
    printf("Ramesh gross salary :%d",gs);


    return 0;
}