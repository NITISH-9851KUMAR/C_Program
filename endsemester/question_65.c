#include<stdio.h>
int prime(int num){
    for(int i=2;i<=num;i++){
        if(num%i==0){
            printf("%d ",i);
            num=num/i;
            i--;
            
        }
    }
}
int main(){
    int num;
    printf("Enter an Integer :");
    scanf("%d",&num);
    prime(num);
    return 0;
}