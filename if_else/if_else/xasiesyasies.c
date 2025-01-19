/*Given a point (x,y),write a program to find out if it lies on the x-axis,y-axis or at the origin.*/
#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the coridanates :");
    scanf("%d %d", &x, &y);
    if ((x > 0 || x < 0) && (y == 0))
    {
        printf("The point on x axis");
    }
    else if ((y > 0 || y < 0) && (x == 0))
    {
        printf("The point on y axis ");
    }
    else if ((x > 0 || x < 0) && (y > 0 || y < 0))
    {
        printf("The point some distance form x axis and y axies ");
    }
    else
    {
        printf("The point on origin");
    }

    return 0;
}