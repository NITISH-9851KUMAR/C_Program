#include <stdio.h>
int main()
{
    int x;
    printf("Enter 1st number :");
    scanf("%d", &x);
    int y;
    printf("Enter 2nd number :");
    scanf("%d", &y);
    
    if (x > y)
        printf("%d is greatest ", x);
    else if (y > x )
        printf("%d is greatest ", y);
   
    return 0;
}