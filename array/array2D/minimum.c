#include<stdio.h>
#include<limits.h>
int main(){
    int arr[2][2]={4,5,-6,7};
    int min=INT_MAX;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
    printf("%d",min);
    return 0;
}