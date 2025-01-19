// #include<stdio.h>
// void fun(int x[]){// arr[size] size me uska value nahi likhte hai sirf
// x[0]=109;
// return;
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     printf("%d\n",arr[0]);
//     fun(arr);// function me likhne ke liye sirf arry name likhte hai size nahi likhte hai
//     printf("%d\n",arr[0]);//printf after use function then value cahnge
//     return 0;
// }
#include <stdio.h>
void fun(int x[]){
    int temp=x[0];
    x[0]=x[1];
    x[1]=temp;
}
int main()
{
    int arr[2] = {2, 4};
    printf("%d %d\n", arr[0], arr[1]);
    fun(arr);
    printf("%d %d\n", arr[0], arr[1]);
    return 0;
}