#include <stdio.h>
int main()
{
    int x;
    printf("Enter Table number :");
    scanf("%d",&x);
    for (int i = x; i <= x * 10; i = x + i)
    {
        printf("%d ", i);
    }
    return 0;
}