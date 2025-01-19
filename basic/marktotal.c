#include <stdio.h>
int main()
{

    int x;
    printf("enter percentage mark :");
    scanf("%d", &x);
     if (x >= 60)
    {
        printf("First divison");
    }
    else if (x>50 && x<59)
    {
        printf("second divison");
    }
    else if (x < 49 && x>40)
    {
        printf("Third divison ");
    }
    else if(x<40){
        printf("The student is fail");
    }
    return 0;
}