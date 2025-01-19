#include<stdio.h>
int main(){
    int n;
    printf("Enter your number :");
    scanf("%d",&n);
    int evensum=0;
    int oddsum=0;
    for(int i=1;i<=n;i++){
        if(i%2==0) evensum+=i;
        else oddsum+=i;
    }
    printf("Evensum:%d\n",evensum);
    printf("Oddsum :%d",oddsum);
    return 0;
}