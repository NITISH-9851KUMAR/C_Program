// what is ternery operater
// ternary operater is use only two condition when if or else
// formula->exp1 ? exp2 : exp3;
#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number :");
    scanf("%d", &x);
    x > 99 && x < 1000 ? printf("%d is three digit number ", x) : printf("%d is not three digit number ", x);
    return 0;
}
