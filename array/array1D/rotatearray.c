/*Three steps happen for  rotating array these are 
1)k=k%n  k=given steps n=no of index
2)reverse (arr,0,n-1) reverse all arry
3)rererse (arr,0,k-1) 
4)reverse (arr,k,n-1)*/
#include<stdio.h>
void reverse(int arr[],int si,int ei){ // reversing part of array 
for(int i=si,j=ei;i<=j;i++,j--){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
return ;
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int n=7;// size of array
    int k=3;// no of rotations 
    k=k%n;
    reverse(arr,0,n-1);
    reverse (arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}