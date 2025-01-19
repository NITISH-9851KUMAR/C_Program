#include<stdio.h>
int main(){
    int x;
    printf("Enter your number :");
    scanf("%d",&x);
    if(x%3==0 || x%4==0){
        if(x%12 !=0){
            printf("This %d is divided by 3 or 4",x);
        }
        else{
            printf("This %d is divided by 12",x);
        }
        }
        else {

            printf("This %d is not divided by 4 or 3 ",x);
        
    }

    return 0;
}