#include <stdio.h>
void england()
{
    printf("you are in England \n");
    return;
}
void australia()
{
    printf("You are in Australia \n");
    england(); // calling england 
    return;
}
void india()
{
    printf("Yor are in Indai \n");
    australia(); // calling australia 
    return;
}
int main()
{
    india(); // here india is calling function hamne india name ke fucntion ko call kiya 
    return 0;
}
// function me jisko bhi call karna ho ho main() ke upper hona
// chahiye ye these are must be nessasry