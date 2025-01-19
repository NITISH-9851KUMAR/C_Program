#include<stdio.h>
int main(){
    char str[50];
    printf("Enter character :");
    scanf("%c",&str);
    for(int i=0;str[i]!='\0';i++){
    if(str[i]>='a'&& str[i]<='z')
        str[i]-=32;
        printf("%s",str);
    
    if (str[i]>='A'&& str[i]<='Z')
        str[i]+=32;
        printf("%s",str);
    
    }
    return 0;
}