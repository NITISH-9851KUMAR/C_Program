#include <stdio.h>
int swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}
int main()
{
    int a, b;
    printf("enter value ");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("%d %d", a, b);
    return 0;
}