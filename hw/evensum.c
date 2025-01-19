#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number :");
    scanf("%d", &x);
    int evensum = 0;
    for (int i = 1; i <= x; i++)
    {
        if (i % 2 == 0)

            evensum = evensum + i;
    }
    printf("evensum:%d", evensum);
    return 0;
}