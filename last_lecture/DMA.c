#include<stdio.h>
int main(){
    int n;
    printf("Enter Array's size :");
    scanf("%d",&n);
    int arr[n];// run time compile 
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
    return 0;
}