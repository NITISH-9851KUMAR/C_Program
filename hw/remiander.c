/*You will learn to find the quotient and remainder when an integer is divided by another integer.*/
#include<stdio.h>
int main(){
   int a,b,c,e;
   printf("Enter divident :");
   scanf("%d",&a);
   printf("Enter divisor :");
   scanf("%d",&b);
   e=a % b;
   c=(a-e)/b;
   printf("\nQueteint  is :%d",c);
   printf("\nRemainder is :%d",e);
   return 0;

}
