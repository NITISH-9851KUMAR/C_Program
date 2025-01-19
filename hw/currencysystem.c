/*Consider a currency system in which there are notes of six denominations,namely,
Re.1,Rs 2,rs 5,rs 10,rs 50,rs.100.if a sum of Rs n entered through the keyboard write a program to compute the smallest
number of notes that will combine to give Rs.N.*/
#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n;
    printf("Enter your amount :");
    scanf("%d", &a);
    b = a % 100;
    c = (a - b) / 100;
    printf("Notes of 100 : %d", c);
    e = b % 50;
    f = (b - e) / 50;
    printf("\nNotes of 50 : %d", f);
    g = e % 10;
    h = (e - g) / 10;
    printf("\nNotes of 10 : %d", h);
    i = g % 5;
    j = (g - i) / 5;
    printf("\ncoin of 5 :  %d", j);
    k = i % 2;
    j = (i - k) / 2;
    printf("\ncoin of 2 :  %d", j);
    m = k % 1;
    n = (k - m) / 1;
    printf("\ncoin of 1 :  %d", n);

    return 0;
}
