#include<stdio.h>
void increasing(int n){
    if(n==0) return ; 
    printf("%d ",n);
    increasing(n-1);
    printf("%d ",n);
    return ;
}
int main(){
    int n;
    printf("Enter your number :");
    scanf("%d",&n);
    increasing(n);
    return 0;
}