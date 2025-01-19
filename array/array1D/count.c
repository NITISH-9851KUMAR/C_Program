/*write a program to find the greatest number that number is greater then 4*/
#include <stdio.h>
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int x = 4;
    int count = 0;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > x)
            count++;
    }
    printf("%d Number are greater then 4\n", count);
    printf("These number are :");
    for (int j = 0; j < 7; j++)
    {
        if (arr[j] > x)
            printf("%d ", arr[j]);
    }
    return 0;
}