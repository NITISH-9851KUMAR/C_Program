/*Display this Ap - 4,7,10,13,16..upto 'n' terms*/
#include<stdio.h>
int main(){
    int x; //itni bar loop chalega
    printf("Enter a number :");
    scanf("%d",&x);
    int a=4;
    for(int i=1;i<=x;i++){
        printf("%d ",a); // print odd number
        a+=3;
    }

    return  0;
}