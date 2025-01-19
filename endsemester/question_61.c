#include <stdio.h>
int main()
{
    int m;
    printf("Enter your math mark :");
    scanf("%d", &m);
    int p;
    printf("Enter your physics  mark :");
    scanf("%d", &p);
    int c;
    printf("Enter your chemistry mark :");
    scanf("%d", &c);
    int h;
    printf("Enter your hindi mark :");
    scanf("%d", &h);
    int e;
    printf("Enter your english mark :");
    scanf("%d", &e);
    int perc=(m+p+c+h+e)/5;
    if(perc>=60)  printf("First division ");
    else if (perc>50 &&perc<59) printf("second divison");
    else if (perc>40&&perc<49 ) printf("third divison ");
    else printf("fail ");
    return 0;
}