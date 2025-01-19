#include<stdio.h>
int main(){
    int n,m,gcd;
    printf("Enter two number :");
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n&& i<=m;i++){
        if(n%i==0&& m%i==0)
        gcd=i;
    }
    int lcm=(n*m)/gcd;
    printf("%d\n",lcm);
    return 0;
}