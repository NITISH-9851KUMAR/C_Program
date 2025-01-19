/*find the second largest number of the given array given array */
#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0;i<8;i++){
        if(arr[i]>max){
            smax=max;
            max=arr[i];
        }
        else if( arr[i]>smax   && max!=arr[i]){
            smax=arr[i];
        }
    }
    printf("%d", smax);
    return 0;
}
