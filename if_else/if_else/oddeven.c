//teke positive integer input and tell if it is even
#include <stdio.h>
int main()
{
int x;
printf("enter a number :");
scanf("%d",&x);
if(x%2==0){                         
  printf("even number ");}
   if(x%2==1){                   /* if(x%2==1){ printf("odd number");}*/
  printf("odd number");}
  /* else {
  printf ("odd number");
}*/                  //we use else or if for odd number 

return 0;
}