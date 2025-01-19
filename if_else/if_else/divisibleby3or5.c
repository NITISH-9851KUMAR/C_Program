#include<stdio.h>
int main(){
int x;
printf("Enter your number :");
scanf("%d",&x);
if(x%5==0  || x%3==0){
    printf("%d is divisible by 5 or 3 ",x);
}
else{
    printf("%d  is not divisible by 5 or 3 ",x);
}
    return 0;
}