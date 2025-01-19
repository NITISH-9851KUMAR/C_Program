#include <stdio.h>
int main()
{
    int x;
    printf("Enter 1st number :");
    scanf("%d", &x);
    int y;
    printf("Enter 2nd number :");
    scanf("%d", &y);
    int z;
    printf("Enter 3rd number :");
    scanf("%d", &z);
    if (x > y && x > z)
        printf("%d is greatest ", x);
    else if (y > x && y > z)
        printf("%d is greatest ", y);
    else
        printf("%d is greatest ", z);
    return 0;
}