#include <stdio.h>
int main()
{
    int x;
    printf("counting number :");
    scanf("%d", &x);
    for (int i = x; i <= x * 10; i+=x)
    {
        printf("%d ",i);
    }
    
    
    return 0;
}