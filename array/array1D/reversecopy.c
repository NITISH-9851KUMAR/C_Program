/*write a program to copy the contents of one array into another in the reverse order  */
#include<stdio.h>
int main(){
    int arr[6]={1,2,3,4,5,6};
    int brr[6];
    for(int i=0;i<6;i++){
        brr[i]=arr[5-i];
    }
    for(int i=0;i<6;i++){
        printf("%d ",brr[i]);
    }
    
    return 0;
}