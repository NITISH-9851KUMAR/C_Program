#include<stdio.h>
int main(){
    int num;
    printf("Enter The Positive Number :");
    scanf("%d",&num);
    int a=0;
    
    for(int i=2;i<=num-1;i++){
        if(num%i==0){
            a=1;
            break;
        }
    }

    if(num==0) printf("%d is not prime numbr neither composite numer ");
    else if(a==0) printf("%d is prime numbr",num);
    else printf("%d is composite number",num);
    return 0;
}