
#include<stdio.h>
int main(){
    int x;
    printf("Enter Input number :");
    scanf("%d",&x);
    int sum=0;
    //1-2+3-4+5-6+7-8+9-10
    for(int i=1; i<=x; i++){
        if(x%i==0)
                 sum=sum-i;
        else 
             sum=sum+i;
        

    }
    printf("The sum :%d",sum);
    return 0;
}