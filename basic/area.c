#include <stdio.h>
int main()
{
    int len, bre, area, per;
    float red, areaa, cir;
    printf("Enter your length :");
    scanf("%d", &len);
    printf("Enter your breadth :");
    scanf("%d", &bre);
    printf("Enter your redius :");
    scanf("%f", &red);
    area = len * bre;
    per = 2 * (len + bre);
    areaa = 3.14156 * red * red;
    cir = 2 * 3.14156 * red;
    printf("\nArea of rectangle :%d", area);
    printf("\nPerimeter of rectangle :%d", per);
    printf("\nArea of circle:%f", areaa);
    printf("\nCircumfrance of circle :%f", cir);

    return 0;
}