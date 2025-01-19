#include <stdio.h>
int main()
{
    int vo;
    char  a, e, i, o, u;
    printf("Enter charceter :");
    scanf("%c", &vo);
    if (vo == a)
    {
        printf("%c Vowel", vo);
    }
    else
    {
        printf("%c not vowel ", vo);
    }
    return 0;
}