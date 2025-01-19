#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int day;
        int month;
        int year;
    }date;
    date a,b;
    a.day=5;
    a.month=12;
    a.year=2003;
    
    b.day=5;
    b.month=12;
    b.year=2003;

    bool flag =true;
    if(a.day!=b.day)  flag =false;
    if(a.month!=b.month) flag =false;
    if(a.year!=b.year) flag =false;

    if(flag==true) printf("The dates are equal");
    else printf("The dates are different");
  
    return 0;
}