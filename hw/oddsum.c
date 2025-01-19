#include<stdio.h>
int main(){
    int x;
    printf("Enter number :");
    scanf("%d",&x);
    int oddsum=0;
    for(int i=1; i<=x; i++){
        if(i%2!=0)
        oddsum=oddsum+i;
    }
    printf("Total oddsum:%d",oddsum);
    return 0;
}