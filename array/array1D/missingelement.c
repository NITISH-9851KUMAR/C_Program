/*Given an array containing elements from 1 to 100 
except one element is this range is missing. Find the missing element.*/
#include<stdio.h>
int main(){
    int arr[99];//{1,2,3,4,5,6,7.8,9,,,,,,,,,,,95,96,96,98,99};
    int sum1=0;
    int sum2=0;
    for(int i=0;i<99;i++){
    sum1=sum1+(i+1);
    }
    for(int i=0;i<100;i++){
    sum2=sum2+(i+1);
    }
    printf("%d",sum2-sum1);
    return 0;
} 