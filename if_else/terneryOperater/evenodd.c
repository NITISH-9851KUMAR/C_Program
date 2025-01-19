// what is ternery number
// ternary operater is use only two condition when if or else
// exp1 ? exp2 : exp3;
#include <stdio.h>
int main()
{
    int x;
    printf("Enter your number:");
    scanf("%d", &x);
    x%2==0? printf("%d is even number ",x): printf("%d is odd number ",x);
    return 0;
}