#include<stdio.h>
void dec(int n){
    if(n==0) return ;
    printf("%d ",n);
    return dec(n-1);
}
int main(){
    int n;
    printf("Etner a number :");
    scanf("%d",&n);
    dec(n);
    return 0;
}