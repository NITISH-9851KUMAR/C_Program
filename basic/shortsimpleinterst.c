//calculate the value of simple interst 
#include<stdio.h>
int main ()
{
int p,t;
float si,r;

printf("enter p,t,r:");
scanf("%d %d  %f ",&p,&t,&r );

si= p*t*r/100;
printf("simple interst is  %f \n",si);
return 0;
}

