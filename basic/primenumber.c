#include<stdio.h>
int main(){
    int x;
    printf("Enter yoru number :");
    scanf("%d",&x);
    int a=0;
    for(int i=2; i<x; i++)
    if(x%i==0){
        a=1;
        break ;
    }
    if(x==1) printf("1 is neither prime numbe nor compostie number ");
    else if (a==0) printf("%d is prime number ",x);
    else printf("%d is composite number ",x);
    return 0;
}