/*If the ages of Nitish,Rahul,Shyam are input thuough the keyboard write a program to 
determine the youngest of three*/
#include<stdio.h>
int main(){
int x;
printf("Enter Nitish age :");
scanf("%d",&x);
int y;
printf("Enter Rahul age :");
scanf("%d",&y);
int z;
printf("Enter Shyam age :");
scanf("%d",&z);
if(x<y && x<z){
    printf("I am youngest");
}
if(y<z && y<x){
    printf("Rahul is youngest of them ");
}
if(z<x && z<y){
    printf("Shyam is youngest of them");
}




    return 0;
}
