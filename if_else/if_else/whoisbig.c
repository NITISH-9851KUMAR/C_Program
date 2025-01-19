#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter Rahul age :");
    scanf("%d", &x);
    printf("Enter kunal age :");
    scanf("%d", &y);
    printf("Enter golu age :");
    scanf("%d", &z);
    if (x > y)
    {
        if (x > z)
            printf("Rahul%d is greatest ", x);
        else
            printf(" golu%d is greatest ", z);
    }
    else
    {
        if (y > x)
            if (y > z)
                printf("kunal%d is greatest ", y);
            else
                printf("golu%d is greatest", z);
    }

    return 0;
}