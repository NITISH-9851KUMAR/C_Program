 /*<<<<<<<  puts is use for print only character >>>>>>>>  vvvi */ 
// automatically \n bhi de deta hai puts function 


#include<stdio.h>
int main(){
    char str[]="Nitish kumar district saharsa";
    puts(str);// here in puts no use double comma because here str is declare
    puts("name");// here in puts double inverted comma mins new character 
    // puts is declare two types 
    // if character is declare in programe then puts function use -> puts(char name)
    // if char is not declare mins we print any char then puts fn use -> puts("char name")
    return 0;
} 