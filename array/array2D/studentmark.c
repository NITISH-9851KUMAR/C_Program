#include<stdio.h>
int main(){
    int r,c;
    printf("Enter no of students :");
    scanf("%d",&r);
    printf("Enter Subject :");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter roll no and marks:");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}