/*if cost price and selling price of an item is input through the keyboard,
write a program to determine whether the seller has made profit or incurred loss.
also determine how much profit he made or loss he incurred
*/
#include<stdio.h>
int main(){
    float cp,sp,profit,loss;
    printf("enter your cost price:");
    scanf("%f",&cp);
    printf("enter your selling price:");
    scanf("%f",&sp);

if(sp>cp){
    profit=sp-cp;
}

printf("profit :%f",profit);
if(sp<cp){
    loss=cp-sp;

}printf(" \nloss:%f",loss);
    
        
 return 0;
}