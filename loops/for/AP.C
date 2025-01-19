#include<stdio.h>
int main(){
    int x;
    printf("Enter Number :");
    scanf("%d",&x);
    int a=2;
    for(int i=a; i=x; i++){
        printf(" %d",a);
        a=a*2;
    }
    return 0;
}