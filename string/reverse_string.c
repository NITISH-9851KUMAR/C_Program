#include<stdio.h>
#include<string.h>
int main(){
char str[40];
puts("Enter string:");
gets(str);
int size =0;
int i=0;
while(str[i]!='\0'){
    size++;
    i++;
}
for(int i=0,j=size-1;i<=j;i++,j--){
    char temp=str[i];
    str[i]=str[j];
    str[j]=temp;
}
printf("The reverse string :%s",str);
    return 0;
}