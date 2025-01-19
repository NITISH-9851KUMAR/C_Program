#include<stdio.h>
int main(){
int x,y,z;
printf("enter value :");
scanf("%d",&x);
y=x % 2;
z=(x-y)/2;
printf(" quetient is %d ",z);
printf(" \nremiander is %d ",y);
    return 0;
}