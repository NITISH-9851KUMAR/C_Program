#include <stdio.h>
int main()
{
    int x;
    printf("Enter Fehrenhit degrees :");
    scanf("%d", &x);

    float centi = (x - 32) * 5 / 9.00;
    printf("Degree Celsius :%f 0c ", centi);

    return 0;
}