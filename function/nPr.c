#include <stdio.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int permutation(int n,int r){
    int npr=factorial(n)/factorial(n-r);
}
int main()
{
    int n;
    printf("Enter ther value of n:");
    scanf("%d", &n);
    int r;
    printf("Enter the value of r :");
    scanf("%d", &r);
    int npr =permutation(n,r);
    printf("The value of nPr :%d",npr);
    return 0;
}