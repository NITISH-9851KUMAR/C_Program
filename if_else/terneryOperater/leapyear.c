#include<stdio.h>
int main(){
    int x;
    printf("Enter year:");
    scanf("%d",&x);
    x%4==0 ?printf("This is leap year") : printf("This is not leap year");
    return 0;
}
