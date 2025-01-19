#include <stdio.h>
int main()
{
    int x;
    printf("Enter Table number :");
    scanf("%d", &x);
    int m = 1;
    for (int i = 1; i <= 10; i++)
    {
        m = x * i;
        printf("\n%d*%d:%d",x,i,m);
    }
    

    return 0;
}
