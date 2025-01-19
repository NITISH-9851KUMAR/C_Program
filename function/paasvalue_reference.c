#include<stdio.h>
void swap (int a,int b){
    int temp;
    a=b;
    b=temp;
    return ;
}
int main(){
    int a;
    printf("Enter a :");
    scanf("%d",&a);
    int b;
    printf("enter b :");
    scanf("%d",&b);
    swap(a,b);
    printf("%d %d",a,b);
    return 0;
}
