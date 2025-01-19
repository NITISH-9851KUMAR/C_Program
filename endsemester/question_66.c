#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, s;
    printf("Enter The side of tiangle a  b c ");
    scanf("%d  %d  %d", &a, &b, &c);
    s = (a + b + c) / 2;
    int d = s * (s - a) * (s - b) * (s - c);
    int area = sqrt(d);
    printf("The area of triangle :%d", area);
    return 0;
}