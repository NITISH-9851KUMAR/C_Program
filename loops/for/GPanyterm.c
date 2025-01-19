/*Display this GP 3 12 48.. upto n terms.*/
#include <stdio.h>
int main()
{
    int x;
    printf("Enter number :");
    scanf("%d", &x);
    int a = 3;
    for (int i = 1; i <= x; i++)
    {
        printf(" %d", a);
        a = a * 4;
    }
    return 0;
}