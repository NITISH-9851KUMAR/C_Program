#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int rev=0;
    int power=1;
    while(n!=0){
        int rem=n%10;
        rev=rev*power+rem;
        power=10;
        n=n/10;
    }
    printf("The reverse Number :%d",rev);
    return 0;
}