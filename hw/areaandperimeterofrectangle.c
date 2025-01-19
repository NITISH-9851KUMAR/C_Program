   /*The length and breadth of a rectangle and redius of a circle and input through the keyborad .
   Write a program to calculate the area and perimeter of the rectangle ,and the area and cicumference of the circle.*/
    #include<stdio.h>
    int main(){
    int l;
    printf("Enter your length: ");
    scanf("%d",&l );
    int b;
    printf("Enter your breadth: ");
    scanf("%d",&b );
    int a=l*b;
    int p=(l+b)*2;
    int r;
    printf("Enter your redius: ");
    scanf("%d",&r );
    float ar=3.15156*r*r*r;
    float ci=2*r*3.14156789;
    printf("\nArea of rectangle :%d",a);
    printf("\nperimeter of rectangle :%d",p);
    printf("\nArea of circle:%f",ar);
    printf("\nCircumference of circle:%f",ci);
    return 0;
    }   




    

    