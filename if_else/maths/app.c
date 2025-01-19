#include <stdio.h>
int main()
{
    int a1, a2, a3, a4, a5, d1, d2, d3, d4, d5,s, n;
    n = 5;
    printf("Enter a1 :");
    scanf("%d", &a1);

    printf("Enter a2 :");
    scanf("%d", &a2);

    printf("Enter a3 :");
    scanf("%d", &a3);

    printf("Enter a4 :");
    scanf("%d", &a4);

    printf("Enter a5 :");
    scanf("%d", &a5);

    d1 = a2 - a1;
    d2 = a3 - a2;
    d3 = a4 - a3;
    d4 = a5 - a4;
    if (d1 == d2 && d2 == d3 && d3 == d4)
    {
        printf("This is AP ");
        printf("\nCommon difference :%d", d1);
        s=(2*a1+(n-1)*d1)*n/2;
        printf("\nSum of total number :%d",s);
    }
    else
        printf("This is not ap");

    return 0;
}