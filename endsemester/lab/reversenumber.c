#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    int c = n;
    int r = 0, ld;
    while (n != 0)
    {
        ld = n % 10;
        r = r * 10 + ld;
        n = n / 10;
    }
    printf("The Reverse numbr :%d\n", r);
    if (r == c)
        printf("This is palidrome number ");
    else
        printf("This is not palidrome number ");

    return 0;
}