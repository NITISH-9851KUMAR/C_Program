#include <stdio.h>
int main()
{
    int a1, a2, a3, a4, a5, d1, d2, d3, d4, d5,s, n;
    n = 5;
    printf("a1 :");
    scanf("%d", &a1);

    printf("a2 :");
    scanf("%d", &a2);

    printf("a3 :");
    scanf("%d", &a3);

    printf("a4 :");
    scanf("%d", &a4);

    printf("a5 :");
    scanf("%d", &a5);

    d1 = a2/a1;
    d2 = a3/a2;
    d3 = a4 / a3;
    d4 = a5 / a4;
    if (d1 == d2 && d2 == d3 && d3 == d4){
        printf("This is term of GP");
        printf("\ncommon Ration :%d",d1);
    }
    else printf("This is not term of GP");
    return 0;
}