/* in arry to do swap of two number no use pointer easily use to function 
*/

#include<stdio.h>
void fun(int x[]){
    int temp=x[0];
     x[0]=x[1];
     x[1]=temp;
}
int main(){
    int arr[2]={4,2};
    printf("%d %d",arr[0],arr[1]);
    fun(arr);
    printf("\n");
    printf("%d %d",arr[0],arr[1]);
    return 0;
}