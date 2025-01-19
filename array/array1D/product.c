#include<stdio.h>
int main(){
    int arr[4];
    printf("Enter Number :");
    for(int i=0;i<4;i++){
        scanf("%d",&arr[i]);
    }
    int product=1;
    for(int i=0;i<4;i++){
        product=product*arr[i];
    }
    printf("%d",product);
    return 0;}