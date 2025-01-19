/*any year is input through the keyboard.Write a program to determine whether the year is a leap tear or bot */
#include<stdio.h>
int main()
{
int a;
printf("enter your year :");
scanf("%d",&a);
if(a%4==0){
    printf("this is leap year ");
    }
else{
printf("not leap year");


}
return 0;
}