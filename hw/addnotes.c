/*calculate the add of different types of notes ,take input from users and sum of them*/
#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h, x;
    printf("Enter your 500 notes :");
    scanf("%d", &a);
    printf("Enter your 100 notes :");
    scanf("%d", &b);
    printf("Enter your 50 notes :");
    scanf("%d", &c);
    printf("Enter your 20 notes :");
    scanf("%d", &d);
    printf("Enter your 10 noter :");
    scanf("%d", &e);
    printf("Enter your 5₹ coins :");
    scanf("%d", &f);
    printf("Enter your 2₹ coins :");
    scanf("%d", &g);
    printf("Enter your 1₹ coins :");
    scanf("%d", &h);
    x = (500 * a) + (100 * b) + (50 * c) + (20 * d) + (10 * e) + (5 * f) + (2 * g) + (1 * h);
    printf("Total ₹ : %d", x);

    return 0;
}