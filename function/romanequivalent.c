#include <stdio.h>
int romanise(int, int, char);
int main() 
{
    int yr;
    printf("\nenter year:");
    scanf("%d", &yr);
    yr = romanise(yr, 100, 'm');
    yr = romanise(yr, 500, 'd');
    yr = romanise(yr, 100, 'c');
    yr = romanise(yr, 10, 'X');
    yr = romanise(yr, 5, 'v');
    romanise(yr,1,'i');
    return 0;
}
int romainse(int y,int k,char ch)
{
    int i,j;
    j=y/k;
    for(i=1;i<=j;i++){
        printf("%c",ch);
        return (y-k*j);
    }
}