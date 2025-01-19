/*write a program for swaping the values of two variables*/
#include<stdio.h>
int main(){
int a,b;
printf("Entre vlaue of a:");
scanf("%d",&a);
printf("Entre vlaue of b:");
scanf("%d",&b);

a=a+b;
b=a-b;
a=a-b;
printf("a=%d",a);
printf("\nb=%d",b);
return 0;
}