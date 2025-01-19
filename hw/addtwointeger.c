/*The user is asked to enter two integer .Then, the sum of these of two integers 
is calculated and displayed on the screen*/
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter first integers :");
    scanf("%d",&a);
    printf("Enter second integers :");
    scanf("%d",&b);
    int c=a+b;
    printf("The sum of two integers is : %d",c);
    
    
    
    return 0;

}