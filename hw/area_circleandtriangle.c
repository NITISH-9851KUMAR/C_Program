/*Write a prigram to find an area of circle and triangle*/
#include<stdio.h>
int main(){
    int b,h;
    printf("Enter height of triangle :");
    scanf("%d",&h);
    printf("Enter breadth  of triangle :");
    scanf("%d",&b);

    float r,areaa;
    printf("Enter your redius :");
    scanf("%f",&r);
    int area =(h*b)/2;
    printf("Area of triangle :%d",area);
    
    areaa=3.14156789*2*r*r;
    printf("\nArea of circle :%d",areaa);


    
    
    return 0;
}