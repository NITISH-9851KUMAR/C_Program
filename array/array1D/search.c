#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[7] = {4, 1, 2, 3, 4, 5, 6};
    int x = 6;
    int idx=1;// bool is data type
    bool flag = false; // false mins not present in array;
    for (int i = 0; i < 7; i++)
    {
        if (x == arr[i])
        {
            flag = true; // true mins present in array;
            idx=i;
            break;
        }
    }
    if (flag == false)
        printf("%d is not present in array",x);
    else
        printf("%d is  present in array and its index is %d ",x,idx);
    return 0;
}