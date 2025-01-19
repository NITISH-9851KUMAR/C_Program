#include<stdio.h>
int add(int x,int y){
    return x+y;
}
int main(){
    int a, b;
    printf("Enter two numerb :");
    scanf("%d %d",&a,&b);
    int sum=add(a,b);
    printf("The sum of two numer :%d ",sum);
    return 0;
}  