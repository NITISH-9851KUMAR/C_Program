/*takes sp and cp and from user and find we have profit anf loss how much money*/
#include <stdio.h>
int main()
{
    int sp;
    printf("Enter your sp :");
    scanf("%d", &sp);
    int cp;
    printf("Enter your cp :");
    scanf("%d", &cp);
    if(sp>cp){
        sp=sp-cp;
        printf("Profit :%d",sp);
    }
    else if(sp<cp){
        cp=cp-sp;
        printf("Loss :%d",cp);
    }
    else{
        printf("No profit no loss");
    }
    return 0;
}