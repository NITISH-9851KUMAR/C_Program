/*If marks obtained by a student in five different are input through the keyborad .
write a program to find out the aggregate marks and percentage marks obtained by the student.
Assume that the maximum marks that can be obtained in each subjecrt is 100.*/
#include <stdio.h>
int main(){
    int m;
    printf("enter your math mark :");
    scanf("%d",&m);
int p;
    printf("enter your physics  mark :");
    scanf("%d",&p);
int c;
    printf("enter your chemistry  mark :");
    scanf("%d",&c);
int h;
    printf("enter your hindi mark :");
    scanf("%d",&h);
int e;
    printf("enter your english mark :");
    scanf("%d",&e);
   int am =m+p+c+h+e;
   float pm=(m+p+c+h+e)/5.0;
   printf("Aggregate mark : %d",am);
   printf("\nPercentage mark : %f",pm);
   return 0;
   }