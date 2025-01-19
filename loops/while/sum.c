#include <stdio.h>
int main()
{
    int x;
    printf("Enter Input :");
    scanf("%d",&x);
    int sum = 0;
    // printf("Enter number :");
    // scanf("%d",&x);
    for (int i = 1; i <= x; i++)
    {
        printf("%d ", i);
        sum = sum + i;
    }
    printf("\nSum of digit :%d ", sum);
    return 0;
}