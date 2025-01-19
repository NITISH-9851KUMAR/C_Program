#include<stdio.h>
int main(){
    int r;
    int sum=0;
    printf("Enter no of rows :");
    scanf("%d",&r);
    int c;
    printf("Enter no of columns :");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter all the element :");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
    }
    printf("The sum of element :%d",sum);
    return 0;
}