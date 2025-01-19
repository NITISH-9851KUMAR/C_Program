/*Ramesh's basic salary is input trough the keyborad .His dearness
allowance is 40% of basic salary,and house rent allowance is 20% of basic salary.Write a 
programme to calulate his gross salary */
#include<stdio.h>
int main(){
    int bs;
    printf("\nEnter Ramesh's basic salary :");
    scanf("%d",&bs);
    float da=bs*0.4;
    float rs=bs*0.2;
    float gs=da+rs+bs;
    printf("\nRamesh dearness allowance :%f",da);
    printf("\nRamesh house allowance :%f",rs); 
    printf("\nRamesh gross salary : %f",gs);
    return 0;
}