#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number :");
    scanf("%d", &n);
    int a = 0;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            a = 1;
            break;
        }
    }
    if (n == 1)
        printf("1 is neither prime number nor composite number ");
    else if (a == 0)
        printf("This is prime number ");
    else
        printf("This is composite number ");
    return 0;
}