//write a programme to convert specified days into ,years ,weeks and days.
#include <stdio.h>
int main()
{
    int da, y, w, m, p, t, r, s, f;
    printf("Enter days :");
    scanf("%d", &da);
    p = da % 365;             // esse din men divided karne par year(qutient) aur din niklega jo (remainder hai)
    m = (da - p) / 365;       // queteint nikla  jo mere year hai
    printf("year :%d", m);    // phir year  ko print kar diya
    t = p % 30;               // isse p me 30 divided karne se phir se din bachega
    r = (p - t) / 30;         // ab t ki help se quitent (month) nikal lenge
    printf("\nmonth :%d", r); // phir month ko printf kar diya
    s = t % 7;                // ab t me 7 se divede karne par quetent hai wo week ban jayega
    f = (t - s) / 7;          // f esliye nikale ki f mera week  s ki help se nikla
    printf("\nweek :%d", f);  // week ko print kar diya
    printf("\ndays :%d", s);  // s jo mere din hai usko bki print kar diya
    return 0;
}