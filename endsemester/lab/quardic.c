#include <stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    printf("Enter value of a b c :");
    scanf("%d %d %d", &a, &b, &c);
    int d = b * b - (4 * a * c);
    if (d > 0)
    {
        printf("The root is real and distinct ");
        int x = -b - sqrt(d);
        int y = -b + sqrt(d);
        printf("The root is %d %d ", x, y);
    }
    else if (d == 0)
    {
        printf("The root is real is same ");
        int x = -b - sqrt(d);
        int y = -b + sqrt(d);
        printf("The root is %d %d ", x, y);
    }
    else printf("The root is not found because it is complex number ");
    return 0;
}