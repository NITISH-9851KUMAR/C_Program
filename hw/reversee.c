#include<stdio.h>
int main(){
    int x;
    printf("Enter Number :");
    scanf("%d",&x);
    int r=0;
    int lastdigit;
    while(x!=0){
        lastdigit=x%10;
        r=r*10+lastdigit;
        x=x/10;
    }
    printf("Reverse Number :%d",r);
    return 0;
}