#include<stdio.h>
int main(){
int n;
printf("Enter no of line :");
scanf("%d",&n);
int nsp=n-1;
for(int i=1;i<=n;i++){
    for(int k=1;k<=nsp;k++){
        printf(" ");
    }
    int m=65;
    for(int j=1;j<=2*i-1;j++){
        printf("%c",m);
        m++;
    }
    nsp--;
    printf("\n");
}
    return 0;
}