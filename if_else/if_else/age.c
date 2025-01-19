#include<stdio.h>
int main()
{
    int x;
    printf("Enter your age :");
    scanf("%d", &x);
    if (x >= 18)
    {
        printf("you are indian citizen\n");
        printf("you are eligible to vote \n");
        printf("You are eligible to making a driving the car ");
    }
    else
        printf("you are not eligible any one to indian citizen ");
    return 0;
}