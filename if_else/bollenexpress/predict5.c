#include<stdio.h>
int main(){
  //isme sirf true ya false hota hai
  //tue to print 1 hoga 
  //false to print 0 hoga
    int x=3,y,z;
    y=x=10;
    z=x<10;//yaha x ka value new update hokar 10 hai,condition false hai esliye 0 hoga 
    printf("%d ,%d,%d",x,y,z);//print z ka value 0 hoga

    return 0;
}