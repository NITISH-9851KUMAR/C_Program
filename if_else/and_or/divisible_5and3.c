/*take positive integer input and tell if it is divisible by 5and
3*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter your Number:");
    scanf("%d",&n);
    if(n %5==0 && n%3==0){
        //  we can write it  also if(n%15==0){
        printf("The number is divisible by 5and3");
    }
    else{
        printf("This number is not divisible by 5and3");
    }
    
    
    
    
    return 0;
}