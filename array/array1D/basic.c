#include<stdio.h>
int main(){
    int arr[5]={2,4,6,6,1};
    arr[2]=100; //{2,4,100,6,1} not array update 
    printf("%d %d",arr[4],arr[2]);
    return 0;
}