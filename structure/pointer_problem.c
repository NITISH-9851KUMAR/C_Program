#include<stdio.h>
typedef int* pointer ;
int main(){
    int x=5;
    int y=7;
    //int*a ,b;// computer read int*a int b;
    pointer a=&x,b=&y;
    printf("%p\n",a);
    printf("%p\n",b);
    return 0;
}
