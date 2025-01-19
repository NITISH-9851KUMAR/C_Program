#include<stdio.h>
int sum(int n,int add){
    if(n==0) {
        printf("%d",add);
        return add;
    }
    return sum(n-1,add+n);
}
int main(){
    int n;
    printf("Enter term :");
    scanf("%d",&n);
    int x=sum(n,0);
    return 0;
}
