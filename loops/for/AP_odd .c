#include<stdio.h>
int main(){
    int x; 
    printf("Enter your number :");
    scanf("%d",&x);
    int a=2;
    for(int i=1; i<=x; i++){
        printf("%d ",a);
        a=a+2;
    }
    return 0;
}