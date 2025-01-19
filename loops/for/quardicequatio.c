#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    int x1, x2;
    printf("Enter value of a: b: c:");
    scanf("%d %d %d", &a, &b, &c);
    int D = b * b - 4 * a * c;
    printf("D:%d", D);
    int t = sqrt(D);
    if (D > 0)
    {
        printf("\nRoots are real and district ");
        x1 = ((-b - t) / 2 * a);
        printf("\nx1:  %d", x1);
        x2 = ((-b + t) / 2 * a);
        printf("\nx2:  %d", x2);
    }
    else if (D == 0)
    {
        printf("\nRoots are real and equal");
        x1 = (-b - sqrt(D)) / 2 * a;
        printf("\nx1:  %d", x1);
        x1 = ((-b + t) / 2 * a);
        printf("\nx1:  %d", x1);
    }
    else
        printf("\nRoots are Imaginery number so we cannot find the value of x1,x2");
    return 0;
}