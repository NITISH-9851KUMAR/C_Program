/*Display this GP- 1 2 4 8 16 32*/
#include<stdio.h>
int main(){
    int x;
    printf("Enter your number :");
    scanf("%d",&x);
    int a=1;
    for(int i=1; i<=x; i++){
        printf("%d ",a);
        a=a*2;
    }
    return 0;
}

