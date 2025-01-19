#include<stdio.h>
int main(){
    int n;
    printf("Enter you nth number :");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("THe sum of natural number form 1 to %d :%d",n,sum);
    return 0;
}