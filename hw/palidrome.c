#include<stdio.h>
int main(){
    int x;
    printf("Enter Number :");
    scanf("%d",&x);
    int t=x;
    int lastdigit;
    int r=0;
    
    while(x!=0){
        lastdigit=x%10;
        r=r*10+lastdigit;
        x=x/10;
    }
    if(t==r) printf("This is palidrome number ");
    else printf("This is not palidrome");
    return 0;
}