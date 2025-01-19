#include<stdio.h>
void swap(int a,int b){
    int temp=a;
    a=b;
    temp=b;
    return ;
}
int main(){
    int a=2;
    int b=4;
    swap(a,b); // here a and b are formal parameters 
    return 0;  // value of a and b is actural parameters 
               // example a=2 b=4 ,2 and 4 is actural parameters 
}
