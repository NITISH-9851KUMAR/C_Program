#include<stdio.h>
void fun(){
int x;
printf("enter your number :");
scanf("%d",&x);
if(x%2==0){
printf("this number is divisible by 2");}

else{
    printf("This number is not divisible by 2");
}
}
int main(){
    fun ();
    return 0;




}