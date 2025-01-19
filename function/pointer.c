#include<stdio.h>
int main(){
    int a=2;
    int* x=&a;// pointer declare hota hai *(star) p
    printf("%d",a); // address print karne ke liye %p ka use hota hai 
    // printf("%p",x)-> 5xo4 address of a
    // printf("%p",&x)-> 6u5x2 address of x
    // printf("%d",*x)-> x 2 ke under jiska bhi address store hai uska value print karo 

    return 0;
}