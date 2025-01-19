#include<stdio.h>
int main(){
    int n;
    printf("Enter no of rows :");
    scanf("%d",&n);
      int m;
    printf("Enter no of coulum :");
    scanf("%d",&m);
    for(int i=1; i<=n; i++){ // outer loop -> no of lines 
        for(int i=1; i<=m; i++){ // innter loop -> no of stars in each line 
            printf("*");
        }
        printf("\n");// har line ke baad ek enter 
    }
    return 0;
}