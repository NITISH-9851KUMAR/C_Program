/*given the length and breadth of a rectangle 
,wrtie a program to find whether the area of
rectangle is greater than its perimeter */
#include<stdio.h>
int main(){
  int b,l,a,p;
  printf("enter breadth:");
  scanf("%d",&b);
  printf("enter length:");
  scanf("%d",&l);
  a=l*b;
  p=2*(l+b);
if(a>p){
    printf("area is grater then perimeter");
}
if(p>a){
    printf("perimeter is greater then area");
}
if(a==p){
    printf("area is equal to rectangle ");
}


    return  0;
}