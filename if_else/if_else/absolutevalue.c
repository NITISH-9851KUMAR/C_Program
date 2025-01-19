#include<stdio.h>
int main(){
    int x;
    printf("enter your number :");
    scanf("%d",&x);
    
    
    if(x<0) {

     x=x*-1;
    }printf("absolute value %d",x);




    return 0;
}