/*write a programme to calculate bikes average consumption form the given total distance (integer value) 
travelled(in km) and spent fuel(in litters) ,float number dicimal points */
#include<stdio.h>
int main(){
int td;
float lit;
printf("Total distance in km :");
scanf("%d",&td);
printf("Total fuel spent in leters :");
scanf("%f",&lit);
float ava=td/lit;
printf(" Average consumption (km/lt) :%f",ava);

    return 0;
}