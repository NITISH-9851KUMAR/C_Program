#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    int x=power(a,b/2);
    if(b%2==0) 
    return x*x;
    else return x*x*a;

}
int main(){
    int n,m;
    printf("Enter base and power :");
    scanf("%d %d",&n,&m);
    int x=power(n,m);
    printf("%d",x);
    return 0;
}


