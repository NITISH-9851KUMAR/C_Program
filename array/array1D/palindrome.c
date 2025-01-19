/*if an array arr contains n elements ,then check if the given array is a palindrome or not */
#include <stdio.h>
void fun(int arr[])
{
    int i = 0;
    int j = 6;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    if (arr[i] == arr[j]) {
        i++;
        j--;
        printf("This is  palimdrome ");
        }
       else printf("This is not palimdrome ");
    }
return;
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 3,2,11};
    fun(arr);
    for (int i = 0; i < 7; i++)
    {
        printf(" %d", arr[i]);
    }
    return 0;
}