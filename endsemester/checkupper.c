#include <stdio.h>
int main()
{
    int ch;
    printf("Enter number or lower case or upper case :");
    scanf("%d", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("this is lower case ");
    }
    else
        printf("jkasjfdlkjas;");

    return 0;
}