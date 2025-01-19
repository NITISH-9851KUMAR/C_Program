#include<stdio.h>
int main(){
    int x;
    printf("Enter math  mark :");
    scanf("%d",&x);
    int y;
    printf("Enter hindi  mark :");
    scanf("%d",&y);
    int z;
    printf("Enter English mark :");
    scanf("%d",&z);
    int a;
    printf("Enter physics mark :");
    scanf("%d",&a);
    int b;
    printf("Enter chemistry  mark :");
    scanf("%d",&b);
    int aggre=x+y+z+a+b;
    float per=aggre/5.000;
    printf("Aggregate marks :%d",aggre);
    printf("\nPercentage mark :%f",per);


    
    return 0;
}