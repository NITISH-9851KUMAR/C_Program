#include<stdio.h>
 int main(){
//     char str[]="Physics Wallah";
//     printf("%c ",str[5]);
//     printf("%d",str[9]);
char str[]="Nitish kumar";
int i=0;
while(str[i] != '\0'){
    printf("%c",str[i]);//str[i]=i[str] possible
    i++;
}
    return 0;
}