#include <stdio.h>
int main()
{
    int n;
    printf("Entre your number :");
    scanf("%d", &n);
    int m=n;
    //from loop here to 
    int lastdigit;//for sum 
    int sum = 0;// for sum
    while (n != 0)// this loop is for sum of digit
    {
        lastdigit = n % 10;
        sum = sum + lastdigit;
        n = n / 10;
    }
    // printf("%d",sum); isse se sum nikal jayega 
    //loop for sum 

    //loop here to 
    int count=0;
    while(m!=0){
        m=m/10;
        count++;
    }
    // printf("%d",count); isse se digit kitne number ka pata laggaye 
    // count digit ke liye 
    int sumav=sum/count;
    printf("The sum of integer :%d",sum);
    printf("\nThe average of integer: %d",sumav);
    return 0;
}
