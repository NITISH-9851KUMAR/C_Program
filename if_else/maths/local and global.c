#include<stdio.h>
int x=20;
int y=23;
void fun1(){
printf("variable in fun1 %d\n",x);}
void fun2(){
printf("variable in fun2 %d\n",y);}
void fun3(){
printf("add of two numbern %d \n",x+y);}
int main(){
    fun1();
    fun2();
    fun3();
    return 0;
}

