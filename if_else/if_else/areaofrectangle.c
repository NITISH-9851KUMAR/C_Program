//write a code condition is area and perimeter of a circle 

#include<stdio.h>
int main(){

    int l;
    printf("Enter your length :");;
    scanf("%d",&l);
    int b;
    printf("Enter your breadth :");
    scanf("%d",&b);
    int area=l*b;
    int perimeter=2*(l+b);
    printf("\n areaa %d",area);
    printf("\n perimetr %d",perimeter);
    if(area>perimeter ){
        printf("\naea is gretest of perimetr ");
    }
    if(area<perimeter){
        printf("\narea is less ther perimenter");
    }
    if(area==perimeter){
        printf("area is equal to perimeter");

    }
    return 0;
}