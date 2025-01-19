#include <stdio.h>
int main()
{
    int x, evensum, oddsum;
    evensum = 0;
    oddsum = 0;
    printf("Enter your number :");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        if (i % 2 == 0)
            evensum = evensum + i;
        else
            oddsum = oddsum + i;
    }
    printf("The of all even number:%d", evensum);
    printf("\nThe sum of odd number :%d", oddsum);
    printf("\nThe sum of number 1   to   %d :   sum %d ",x,evensum + oddsum);
    return 0;
}