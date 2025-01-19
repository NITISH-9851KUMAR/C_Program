#include <stdio.h>
int main()
{
    int x;
    printf("enter your numebr :");
    scanf("%d",&x);
    int sum = 0;
    for (int i = 1; i <= x; i++)
    {
        sum = sum + i;
        
    }
    printf("%d ", sum);
    return 0;
}