#include<stdio.h>
int main(){
    int n,m;
    printf("Enter two number :");
    scanf("%d %d",&n,&m);
    int hcf,lcm;
    for(int i=1;i<=n&& i<=m; i++){
        if(n%i==0){
            hcf=i;
        }
    }
    lcm=(n*m)/hcf;
    printf("gcd of %d and %d :%d ",n,m,hcf);
    printf("\nlcm of %d and %d :%d",n,m,lcm);
    return 0;
}