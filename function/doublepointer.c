#include<stdio.h>
int main(){
    int a=25;
    int* x=&a; // int* -> int ka address store karta hai 
    // vvip *x=23; // a is cahnge 
    int** y=&x;// int** -> int* ka address store karta hai 
    printf("%d",*x);
    printf("\n%d",**y);
    return 0;
}