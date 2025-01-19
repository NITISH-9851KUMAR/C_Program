/*take positive enteger input and tell if it is a three digit number 
ur not*/


#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
scanf("%d",&n);
if(n>99 && n<1000){
    printf("This is three digit number  ");
}
  else{
    printf("This is not three digit number ");
  }
 return 0;
}