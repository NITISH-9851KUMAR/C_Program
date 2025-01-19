#include<stdio.h>
typedef float realNumber ;
typedef int integer ;
int main(){
    // typedef use to reduse to name 
    // here integer is int but we declare up int integer
    integer  x=34;
    realNumber y=3.1415;
    printf("%f",y);
    printf(" %d",x);
    return 0;
}
// declare 
// typedef oldname newname;