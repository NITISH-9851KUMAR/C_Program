/*the distance between two cities in (km) in input through the keyborad . write a program to convert and prints this 
this distance in meters ,feet , inches , and centimeters */

#include<stdio.h>
int main ()
{
float dis,met,feet,inc,cent;
printf("enter distance in km :");
scanf("%f",&dis);

met=1000*dis;
cent=met*100;
inc=cent/2.54;
feet=inc/12;

printf("distance in meter:%f",met);
printf("\ndistance in centimeter: %f",cent);
printf("\ndistance in feet:%f",feet);
printf("\ndistance in inch:%f",inc);
return 0;
}


