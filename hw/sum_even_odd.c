#include<stdio.h>
int main(){
    int n;
    printf("Enter Number :");
    scanf("%d",&n);
    int evensum=0;
    int oddsum=0;
    for(int i=1;i<=n;i++){
        if(i%2==0)evensum=evensum+i;
        else oddsum=oddsum+i;
    }
    printf("evensum:%d",evensum);
    printf("\noddsum:%d",oddsum);
    return 0;
}