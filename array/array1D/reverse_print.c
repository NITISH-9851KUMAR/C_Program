#include<stdio.h>
int main(){
    int prn[5];
    for(int i=0;i<5;i++){
        printf("Enter %d Boys prn:",i+1);
        scanf("%d",&prn[i]);
    }
    printf("\n");
    for(int i=4;i>=0;i--){
        printf("The  %d boys prn:%d\n",i+1,prn[i]);
    }
    return 0;
}