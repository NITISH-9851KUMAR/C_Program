#include<stdio.h>
int main(){
    int x;
    printf("Enter your turn :");
    scanf("%d",&x);
    int sum=0;
    int a=2;
    for(int i=1;i<=x;i++){
    sum=sum+a;
    a+=2;
    printf("%d ",a);
    }
    printf("\n The sum :%d",sum);
    return 0;
}
