#include <stdio.h>
int main()
{
    int length;
    printf("Enter length :");
    scanf("%d", &length);
    int breadth;
    printf("Enter breadth :");
    scanf("%d", &breadth);
    float redius;
    printf("Enter redius :");
    scanf("%f", &redius);
    printf("\nThe area of rectangle :%d",(length*breadth));
    printf("\nThe perimeter of rectangle :%d",2*(length+breadth));
    printf("\nThe area of circle :%f",3.1414567*redius*redius);
    printf("\ncircumfrence of circle  :%f",2*3.141567*redius);
    return 0;
}