#include<stdio.h>
int main(){
    int n;
    printf("number of line :");
    scanf("%d",&n);
  
      int nsp=n-1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
       int nst=1;
        for(int j=1;j<=2*i-1;j++){
            printf("%d",nst);
            nst++;
        }
        nsp--;
        printf("\n");
    }
    return 0;
}