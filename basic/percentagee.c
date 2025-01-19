
#include<stdio.h>
int main()
{
    int c,p,h,m,e;

    printf("enter your chemistry mark");
    scanf("%d",&c);
    printf("enter your physics  mark");
    scanf("%d",&p);
    printf("enter your  math mark");
    scanf("%d",&m);
    printf("enter your hindi  mark");
    scanf("%d",&h);
    printf("enter your english mark");
    scanf("%d",&e);
    float full=(c+p+h+m+e)/5;
    printf("percentage mark %f",full);
 return 0;
}