#include<stdio.h>
int main(){
    int arr[4]={4,5,2,3};
    int sum=0;
    for(int i=0;i<4;i++){
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}
