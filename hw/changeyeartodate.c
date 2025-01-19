/*white a c programme to convert a given integer (in days) to years ,months and days ,assuming that all months have 30 days and all years have
365 days */
#include <stdio.h>
int main()
{
    int x, a, b, c, d, e, f;
    printf("Enter your days :");
    scanf("%d", &x);
    a = x % 365;
    b = (x - a) / 365;
    c = a % 30;
    d = (a - c) / 30;
    e = c % 7;
    f = (c - e) / 7;
    printf("\nyear :%d", b);
    printf("\nmonth :%d", d);
    printf("\nweeks :%d", f);
    printf("\nDay :%d", e);
    return 0;
}