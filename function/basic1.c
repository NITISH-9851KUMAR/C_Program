#include <stdio.h>
void great()
// external funciton void ko kah sakte hai
{ // external function me int ke jagah void
    printf("good morning\n");
    printf("how are you?\n");
    return;
}
int main()
{
    great(); // function call
    return 0;
}
// DRY-> do not repeat yourself
// function start with the main()
// main() ek hi baar aata hai
// unlimited function bana sakte hai