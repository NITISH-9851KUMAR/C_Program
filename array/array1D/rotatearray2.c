#include <stdio.h>
 void reverse (int arr[],int si,int ei){
    for(int i=si,j=ei;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return ;
    }
    int main(){
    int a,k;
    printf("Enter size of array:");
    scanf("%d",&a);
    printf("Enter elements of array:");
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter no of rotations of array :");
    scanf("%d",&k);
    int n=a;
    int m=k;
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}