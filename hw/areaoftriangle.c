#include<stdio.h>
int main(){
    int x;
    printf("Enter height :");
    scanf("%d",&x);
    int y;
    printf("Enter base :");
    scanf("%d",&y);
    int  tri=(x*y)/2;
    printf("Area of Triangle :%d",tri);
    return 0;

}