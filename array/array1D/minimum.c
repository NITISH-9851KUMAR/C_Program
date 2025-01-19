#include<stdio.h>
int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        printf("Enter your number :");
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(int i=1;i<4;i++){
        if(arr[i]<min)
        min=arr[i];
    }
    printf("%d is smallest number ",min);
    return 0;
}
