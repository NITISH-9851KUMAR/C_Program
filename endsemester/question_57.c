#include<stdio.h>
int main(){
    int m,p,h,c,e;
    printf("Enter your math  physic hindi chemistry english mark ");;
    scanf("%d %d %d %d %d",&m,&p,&h,&c,&e);
    int agg=m+p+h+c+e;
    float per=agg/5.00;
    printf("The aggregate marks :%d",agg);
    printf("\nThe percentage mark :%f",per);
    return 0;
}