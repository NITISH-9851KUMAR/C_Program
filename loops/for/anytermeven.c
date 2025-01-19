#include<stdio.h>
int main(){
    int x,a;
    printf("Enter number :");
    scanf("%d",&x);
    a=2;
    for(int i=1; i<=x; i++){
        printf(" %d",a);
        a=a+2;
    }
    return 0;
}