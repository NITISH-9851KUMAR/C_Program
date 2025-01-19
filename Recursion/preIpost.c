#include<stdio.h>
void perInpost(int n){
    if(n==0) return ;
    printf("Pre %d \n",n);
    perInpost(n-1);
    printf("In %d \n",n);
    perInpost(n-1);
    printf("Post %d \n",n);
    return ;
}
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    perInpost(n);
    return 0;
}