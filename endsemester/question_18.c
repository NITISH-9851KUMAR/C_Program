#include<stdio.h>
int main(){
    int n,m;
    printf("Enter two number ");
    scanf("%d %d",&n,&m);
    int gcd;
    for(int i=1;i<=n&&i<=m ;i++){
        if(n%i==0 && m%i==0) 
        gcd=i;
    }
    printf("The LCM : %d",(n*m)/gcd);
    printf("\nThe HCF :%d",gcd);
    return 0;
}