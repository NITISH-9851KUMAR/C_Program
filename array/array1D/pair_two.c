// Find the total number of pairs in the Array whose sum is equal to the given balue x.
#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int x = 6;
    int totalpairs = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                totalpairs++;
                printf("(%d,%d)", arr[i], arr[j]);
            }
        }
    }
    printf("\n%d", totalpairs);
    return 0;
}
