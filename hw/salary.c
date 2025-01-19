/*In a company an employee is paid as under:

If his basic salary is less than Rs. 1500, then house rent allowance = (10% )of basic
salary and dareness allownance= (90% )of basic salary. If his salary is either equal to or above Rs. 1500,
then house rent allowance= Rs. 500 and dareness allowance = 98% of basic salary. If the employee's salary is input through
the keyboard write a program to find his gross salary.  */

#include <stdio.h>
int main()
{
    int x, hra, da, gs;
    printf("Enter basic salary :");
    scanf("%d", &x);
    if (x < 1500)
    {
        hra = x * 10 / 100;
        da = x * 90 / 100;
        gs = hra + da + x;
        printf("Gross salary :%d", gs);
    }
    else
    {
        if (x >= 1500)
        {
            hra = 500;
            da = x * 98 / 100;
            gs = hra + da + x;
            printf("Gross salary :%d", gs);
        }
    }

    return 0;
}