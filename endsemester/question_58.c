#include<stdio.h>
int main(){
    int n;
    printf("Enter temperater in fahrenheit :");
    scanf("%d",&n);
    int cent=(n-32)*5/9;
    printf("Degree ceslius :%d",cent);
    return 0;
}