#include <stdio.h>
int main()
{
    int x;
    printf("Enter you age :");
    scanf("%d", &x);
    if (x >= 18)
        printf("You are eligible for vote ");
    else
        printf("You not eligible for vote");
    return 0;
}