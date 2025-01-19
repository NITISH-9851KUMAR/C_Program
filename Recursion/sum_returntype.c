#include<stdio.h>
int add(int n){
    if(n==0) return 0;// base case 
    return n+add(n-1);// recursive call
}
int main(){
    int n;
    printf("Enter number :");
    scanf("%d",&n);
    int x=add(n);
    printf("%d",x);

    return 0;
}
