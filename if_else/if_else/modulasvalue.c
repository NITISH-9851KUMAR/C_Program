/*Take integer input and print the absolute value fo that integer*/
#include<stdio.h>
int main(){
    int a;
printf("enter your number :");
scanf("%d",&a);
if(a<0){
    a=a*(-1);

}
printf("absoulete value :%d",a);

return 0;
}