#include <stdio.h>
int main()
{
    do
    {
        printf("For exit A");
        int a;
        scanf("%d", &a);
        char ch;
        scanf("%c", &ch);
        int b;
        scanf("%d", &b);
        switch (ch)
        {
        case '+':
            printf("%d", a + b);
            break;

        case '-':
            printf("%d", a - b);
            break;

        case '*':
            printf("%d", a * b);
            break;

        case '/':
            printf("%f", (float)a / b);
            break;

        case 'a':
            printf("Exit");
            break;
        }
    } while ('a');
    return 0;
}