/*Write a program to print the row numbner having the maximum sum in given matrix.*/
#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{7,8,9},{4,5,6}};
    int maxsum=0;
    int maxIndx=0;
   for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        if(sum>maxsum){
            maxsum=sum;
        maxIndx=i;
        }
    }
    printf("%d ",maxsum);
    printf("%d ",maxIndx);
    return 0;
}