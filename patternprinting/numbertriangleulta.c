 #include<stdio.h>
 int main(){
    int n;
    printf("Enter no of lines :");
    scanf("%d",&n);
    int a=n;
    int nsp=0;
    int b=4;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=1;j<=a;j++){
            printf("%d",j);
        }
        nsp++;
        a--;
        printf("\n");
    }
    return 0;
 }