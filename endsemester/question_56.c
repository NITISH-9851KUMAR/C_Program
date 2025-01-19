#include<stdio.h>
int main(){
    int x;
    printf("Enter Ramesh basic salary :");
    scanf("%d",&x);
    int dr=0.4*x;
    int hr=0.2*x;
    int gr=dr+hr+x;
    printf("The gross salary of Ramesh :%d",gr);
    return 0;
}