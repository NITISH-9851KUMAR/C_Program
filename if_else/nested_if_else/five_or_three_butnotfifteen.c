/*Take positive integer input and tell if it is divisible by 5 or 3*/
#include <stdio.h>
int main (){
    int n;
    printf("Enter your Number :");
    scanf("%d",&n);
    if(n%5==0 || n%3==0){
       if(n%15!=0){
         printf("the number is divisible by 5 or 3 but nor 15");
       }
       else{
        printf("the number is  divisible by 15");
       }
    }
    else{
        printf("This number is not divisible by 5 or 3");
    }

    return 0;
}