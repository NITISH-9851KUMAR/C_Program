#include<stdio.h>
void greating(int n){
    if(n==0) return;
    printf("Good morning\n");
    return greating(n-1);
}
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    greating(n);
    return 0;
}