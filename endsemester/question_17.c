#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    printf("Enter value of a b c ::");
    scanf("%d %d %d", &a, &b, &c);
    int d = b * b - 4 * a * c;
    if (d > 0)
    {
        printf(" D :%d", d);
        printf("\nThe root are real and distnict ");
        int x = (-b + sqrt(d)) / 2 * a;
        int y = (-b - sqrt(d)) / 2 * a;
        printf("\nThe root are :%d %d", x, y);
    }
    else if (d == 0)
    {    
        printf(" D :%d", d);
        printf("\nThe root are real and same ");
        int x = (-b + sqrt(d)) / 2 * a;
        int y = (-b - sqrt(d)) / 2 * a;
        printf("\nThe root are %d %d", x, y);
    }
    else
        printf("\nThis is imaginary root");
    return 0;
}