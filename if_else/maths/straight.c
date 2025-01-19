/*Given three points (x1,ya),(x2,y2) and (x3,y3) ,write a program to check if all the three points fall on one straight line*/
#include <stdio.h> //<  > format strein #include pre processor directive
int main()
{
    int x1, y1, x2, y2, x3, y3;
    printf("Enter your 1st point:");
    scanf("%d %d", &x1, &y1);
    printf("Enter your 2nd point:");
    scanf("%d %d", &x2, &y2);
    printf("Enter your 3rd point:");
    scanf("%d %d", &x3, &y3);
    float m, n;
    m = (y2 - y1) / (x2 - x1);
    n = (y3 - y2) / (x3 - x2);
    if (m == n)
    {
        printf("These point is straight line");
    }
    else
    {
        printf("These point is not straight line");
    }

    return 0;
}