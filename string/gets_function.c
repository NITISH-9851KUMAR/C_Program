// gets is use for take input of string

#include<stdio.h>
int main(){
    char str[40];
    gets(str);//entire sentence can be input
    printf("%s",str);
    return 0;
}