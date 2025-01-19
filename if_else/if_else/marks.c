#include <stdio.h>
int main()
{
    int x;
    printf("Enter percentage :");
    scanf("%d", &x);
    // more than 80 ->a
    // more than 60 ->B
    // more than 50 ->c
    // more than 40 ->d
    // less than 40 ->e
    if (x > 80)
    {
        printf("A grade");
    }
    else if (x > 60)
    {
        printf("B grade");
    }
    else if (x > 50)
    {
        printf("C grade");
    }
    else
    {
        printf("D grade");
    }

    return 0;
}