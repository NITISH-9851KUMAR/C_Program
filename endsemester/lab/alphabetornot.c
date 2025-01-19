#include<stdio.h>
int main(){
    char str[100];
    int i;
    printf("Enter character lower case :");
    scanf("%s",&str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z')
        str[i]-=32;
    }
    printf("Its Upper case :%s",str);
    return 0;
}