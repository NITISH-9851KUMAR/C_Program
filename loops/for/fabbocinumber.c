#include<stdio.h>
int main(){
    int x ,a,b,sum=0;
    printf("Enter your turn :");
    scanf("%d",&x);
    a=1;
    b=1;
    for(int i=2; i<=x; i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("the numer is %d",sum);
    return 0;
}
#include <stdio.h>