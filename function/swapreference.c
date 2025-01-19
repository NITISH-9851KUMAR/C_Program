#include <stdio.h>
void swap(int* x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
    return ;
}
int main()
{
    int a;
    printf("valude of a :");
    scanf("%d", &a);
    int b;
    printf("valude of b :");
    scanf("%d", &b);
    swap(&a,&b);
    printf("value of %d",a);
    printf("\nvalue of %d",b);

    return 0;
}