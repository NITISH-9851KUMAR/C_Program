#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}
int main(){
    int n,m;
    printf("Enter base and power :");
    scanf("%d %d",&n,&m);
    int x=power(n,m);
    printf("%d power %d :%d",n,m,x);
    return 0;
}