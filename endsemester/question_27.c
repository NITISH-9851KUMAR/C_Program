#include <stdio.h>
int prime(int n)
{
    int a = 0;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            a = 1;
            break;
        }
    }
    if (a == 0)
        printf("%d is prime number ",n);
    else
        printf("%d is composite number ",n);

}
    
int main()
{
    int n;
    printf("Enter your number :");
    scanf("%d", &n);
    int chec = prime(n);
    return 0;
}