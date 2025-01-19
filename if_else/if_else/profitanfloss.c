#include<stdio.h>
int main(){
int sp,cp,x,y;
printf("Enter your cost price : ");
scanf("%d",& cp);
printf("Enter your selling price : ");
scanf("%d",&sp);
if(sp>cp){
x=sp-cp;       
printf("Profit %d",x);}
if(sp<cp){
y=cp-sp;   
printf("loss %d",y);
}
if(sp==cp){
    printf("No profit no loss");}
    
    
    return 0;
}