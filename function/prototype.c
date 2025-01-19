#include <stdio.h>
int main()
{
    void india();
    india();
    return 0;
}
void australia()
{
    printf("your are australia\n");
    void england();
     england();
    return;
}
void england()
{
    printf("you are england\n");
    return;
}
void india()
{
    printf("your are india\n");
    void australia();
    australia();
    return;
}