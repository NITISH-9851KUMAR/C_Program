#include<stdio.h>
#include<string.h>
int main(){
    char str[40];// for input we must declare size
    //scanf("%[^\n]s",str) ;//isse pura character input liya ja sakta hai
    //scanf("%s",str);//only the first word will be considered
    // here & is not use because it is string
    gets(str);// is se bhi pura character input liya ja sakta hai
    printf("your input was :%s",str);


    return 0;
} 