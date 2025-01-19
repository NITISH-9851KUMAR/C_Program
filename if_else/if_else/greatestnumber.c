#include <stdio.h>
int main()
{
    int x;
    printf("Enter your 1st number :");
    scanf("%d", &x);
    int y;
    printf("Enter your 2nd number :");
    scanf("%d", &y);
    int z;
    printf("Enter your 3rd number :");
    scanf("%d",&z);
    if (x > y && x > z)
    {
        printf("%d is greater ", x);
    }
    if (y > x && y > z)
    {
        printf("%d is greater ", y);
    }
    if (z > x && z > y)
    {
        printf("%d is greater ", z);
    }

    return 0;
}
