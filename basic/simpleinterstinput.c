#include<stdio.h>
int main ()
{
int p,t;
float si,r;
printf("enter principal:");
scanf("%d",&p);
printf("enter time:");
scanf("%d",&t);
printf("enter rate:");
scanf("%f",&r);
si= p*r*t/100;
printf("simple interst is :%f",si);

return 0;
}






