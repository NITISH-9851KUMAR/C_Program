#include<stdio.h>
int main(){
    int b,h;
    printf("Enter Triangle base and height :");
    scanf("%d %d",&b,&h);
    int area=(b*h)/2;
    printf("The area of triangle :%d",area);
    return 0;
}