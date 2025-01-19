#include <stdio.h>
int main()
{
    int prn;
    printf("Enter your prn last five digit :");
    scanf("%d", &prn);
    switch (prn)
    {
    case 31004:
        printf("Name :Nitish kumar \ngrade :A\ncgp :9.25 ");
        break;
    defualt:
        printf("inviled");
    }
    return 0;
}