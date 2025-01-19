#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[2][2] ={1,5,3,4};
    int max=INT_MIN;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(arr[i][j]>max){
            max=arr[i][j];
            }
                   printf("(%d,%d)",i,j); 
        }
    }
    printf("%d",max);
    return 0;
}