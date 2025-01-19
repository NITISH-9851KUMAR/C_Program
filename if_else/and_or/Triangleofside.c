/*Take 3 numbers input and tell if they can be the sides of a 
trialngle*/
#include<stdio.h>
int main(){
    int x;
    printf("Enter your 1st side :");
    scanf("%d",&x);
int y;
    printf("Enter your 2nd side :");
    scanf("%d",&y);
int z;
    printf("Enter your 3rd side :");
    scanf("%d",&z);
    if((x+y)>z && (y+z)>x && (x+z)>y ){
        printf("This is triangle side ");
    }
    
    
    else {
        printf("This is not triangle side");
    }
return 0;
}