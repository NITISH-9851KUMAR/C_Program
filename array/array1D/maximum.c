#include<stdio.h>
int main(){
    int arr[4]={4,68,7,3};
    int max=arr[0];
    for(int i=1;i<4;i++){
        if(arr[i]>max) max=arr[i];
    }
    printf("%d",max);
    return 0;
}