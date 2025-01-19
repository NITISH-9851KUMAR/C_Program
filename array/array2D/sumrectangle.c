/*Given a matrix a of dimension n*m and 2 coordinates (i1,r1) and (i2,r2) .
Return the sum of the rectangle from (i1,r1)to (i2,r2).*/
#include<stdio.h>
int main(){
    int arr[5][5]={1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5};
    int sum=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=1;i<3;i++){
        for(int j=1;j<5;j++){
            sum+=arr[i][j];
        }
    }
    printf("\n%d",sum);
    return 0;
}