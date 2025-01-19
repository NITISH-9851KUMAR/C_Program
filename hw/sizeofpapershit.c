/*Paper of size A0 has dimensions 1189 mm x 841 mm. Each subsequent size A(n) is defined as
A(n-1) cut in half, parallel to its shorter sides. Thus, paper of size A1 would have dimensions
841 mm x 594 mm. Write a program to calculate and print paper sizes A0, A1, A2,... A8.*/
#include <stdio.h>
int main()
{
    int a, b;
    a = 1189;
    b = 841;
    printf("\nsize of a0 %d*%d", a, b);
    printf("\nsize of a1 %d*%d", b, a / 2);
    printf("\nsize of a2 %d*%d", a / 2, b / 2);
    printf("\nsize of a2 %d*%d", b / 2, a / 4);
    printf("\nsize of a3 %d*%d", a / 4, b / 4);
    printf("\nsize of a4 %d*%d", b / 4, a / 8);
    printf("\nsize of a5 %d*%d", a / 8, b / 8);
    printf("\nsize of a6 %d*%d", b / 8, b / 16);
    printf("\nsize of a7 %d*%d", a / 6, b / 6);
    printf("\nsize of a8 %d*%d", a / 6, b / 6);

    return 0;
}
