/*find the difference between the sum of elements at even indices to the sum of elemetns at odd indices */
#include<stdio.h>
int main(){
    int arr[5]={2,4,5,6,7};
    int evensum=0;
    int oddsum=0;
    for(int i=0;i<5;i++){
        if(i%2==0) evensum+=arr[i];
        else oddsum+=arr[i];
    }
    printf("%d %d",evensum,oddsum);
    return 0;
}