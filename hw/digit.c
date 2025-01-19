#include <stdio.h>
int main()
{
    char x;
    printf("Enter number :");
    scanf("%c", &x);
    if (x == 1 || x == 2 || x == 3 || x == 4 || x == 5 || x == 6 || x == 7 || x == 8 || x == 9 || x == 0)
    {
        printf("This is digit");
    }
    else if (x > 65 && x < 122)
    {
        printf("This is lower case");
    }
    else if (x > 65 && x < 90)
    {
        printf("This is lower case");
    }
    else
        printf("This is special symbol");
    return 0;
}