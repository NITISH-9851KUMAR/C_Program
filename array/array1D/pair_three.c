#include <stdio.h>
int main()
{
    int arr[6] = {2, 4, 5, 6, 8, 1};
    int x = 11;
    int pairs=0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            for (int k = j + 1; k < 6; k++)
            {
                if (arr[i] + arr[j] + arr[k]==x){
                       pairs++;
                printf("(%d,%d,%d)",arr[i],arr[j],arr[k]);
                }
                
            }
        }
    }
    printf("\nTotal pairs :%d",pairs);
    return 0;
}