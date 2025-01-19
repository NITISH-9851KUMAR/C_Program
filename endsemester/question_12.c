#include<stdio.h>
int main(){
    int p,t,r;
    printf("Enter principal time rate :");
    scanf("%d %d %d",&p,&t,&r);
    int sm=(p+t+r)/100;
    printf("The simple interst :%d",sm);
    return 0;
}