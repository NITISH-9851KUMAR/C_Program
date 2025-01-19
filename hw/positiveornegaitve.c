#include<stdio.h>
int main(){
    int x;
    printf("Enter number :");
    scanf("%d",&x);
    if(x<0)
    printf("%d is negative number ",x);
    else printf("%d is positive number",x);
    return 0;
}