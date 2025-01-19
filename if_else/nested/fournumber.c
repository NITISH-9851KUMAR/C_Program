#include <stdio.h>
int main()
{
    int x, y, z, p;
    printf("Enter your 1st number:");
    scanf("%d", &x);
    printf("Enter your 2nd number:");
    scanf("%d", &y);
    printf("Enter your 3rd number:");
    scanf("%d", &y);
    printf("Enter your 4th number:");
    scanf("%d", &p);
    if (x > y){
        if(x>z) {printf("x is greater");
         printf("z is greater ");}
        if (x > p)
        printf("%d is greatest", x);
        else printf("%d is greater", p);
        }

    return 0;
}