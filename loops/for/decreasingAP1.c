#include<stdio.h>
int main(){
    // int x;
    // printf("Enter a number :");
    // scanf("%d",x);
    //100 97 94 91 88 ...... upto positive term
    int x;
    printf("Enter number :");
    scanf("%d",&x);
    int a=100; 
    for(int i=1; a>0; i++){
    printf("%d ",a);
    a=a-3;
    }


    return 0;
}