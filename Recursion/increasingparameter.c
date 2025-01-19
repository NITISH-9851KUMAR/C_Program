#include<stdio.h>
void incr(int x,int n){
    if(x>n) return ;
printf("%d ",x);
return incr(x+1,n);
}
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    incr(1,n);
    return 0;

}