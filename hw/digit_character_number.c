#include <stdio.h>
int main()
{
    char ch;
    printf("Enter Character :");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
        printf("This is lower case  ");
    else if (ch >= 'A' && ch <= 'Z')
        printf("This upper case ");
    else if (ch >= '1' && ch <= '9')
        printf("This is digit ");
    else
        printf("This is special character ");
    return 0;
}