#include<stdio.h>
int main(){
 int mark[10];
 for(int i=0;i<10;i++){
    printf("Etner %d student mark :",i+1);
    scanf("%d",&mark[i]);
 }
 for(int i=0;i<10;i++){
    if(mark[i]<35)
    printf("%d ",i);

 }
    return 0;
}
  