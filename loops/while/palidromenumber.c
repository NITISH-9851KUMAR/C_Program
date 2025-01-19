#include <stdio.h>
int main()
{
    int x;
    printf("Enter  your number :");
    scanf("%d", &x);
    int r=0;
    int lastdigit;
    int y=x;
    while (x != 0)
    {
        lastdigit = x % 10;
        r = r * 10 + lastdigit;
        x = x / 10;
    }
    if(y==r)
    printf("This  palidrome number");
    else printf("This is not palidroem ");
    return 0;
}