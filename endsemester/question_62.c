#include<stdio.h>
int main(){
    int x;
    printf("Enter your number :");
    scanf("%d",&x);
    int r=0;
    int lastdigit;
    while (x!=0){
        lastdigit=x%10;
        r=r*10+lastdigit;
        x=x/10;
    }
    printf("the reverse number is %d",r);
    return 0;
}