#include<stdio.h>
int main(){
    int x;
    printf("enter your number :");
    scanf("%d",&x);
    if(x>99 && x<1000){
        printf("%d is three digit number :",x);
    }
    else{
        printf("%d is not three digit number ",x);
    }
    return 0;
}