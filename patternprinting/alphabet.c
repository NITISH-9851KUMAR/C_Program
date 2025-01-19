#include<stdio.h>
int main(){
    int n;
    printf("Enter no of lines :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int d=64+1;
        char ch=(char)d;
        for(int j=1;j<=n;j++){
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}