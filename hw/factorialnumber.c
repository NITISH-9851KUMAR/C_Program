#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number :");
    scanf("%d", &x);
    int a = x;
    printf("Factorial of %d :\n", x);
    for (int i = 1; i <= x; i++)
    {
        printf("%d*", a);
        a = a - 1;
        printf("\n%d", a * i);
    }
    
    return 0;
}