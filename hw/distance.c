/*The distance between two cities (in kilometer) is input through the keyboard .Write a program 
to cover and print this distance in meters ,feet and centimeters*/
#include<stdio.h>
int main(){
int km;
printf("Enter your distance in kilometer :");
scanf("%d",&km);
int meter=km*1000;
int cm=meter*100;
float inch= cm/2.54;
float ft=inch/12;
printf("\nMeter :%d",meter);
printf("\nCemtimeter :%d",cm);
printf("\nfeet :%f",ft);
printf("\ninch :%f",inch);
return 0;
}