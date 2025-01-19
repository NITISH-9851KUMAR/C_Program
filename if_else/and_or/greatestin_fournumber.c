/*Take 4 positive integers input and print the greatest of them */
#include<stdio.h>
int main(){
    int x;
    printf("Enter your 1st number :");
    scanf("%d",&x);
    int y;
    printf("Enter your 2nd number :");
    scanf("%d",&y);
    int z;
    printf("Enter your 3rd number :");
    scanf("%d",&z);
    int p;
    printf("Enter your 4th number :");
    scanf("%d",&p);
    if(x>y && x>z && x>p){
        printf("%d is greatest number ",x);
    }
    if(y>x && y>z && y>p){
        printf("%d is greatest number ",y);
    }
    if(z>x  && z>y && z>p){
        printf("%d is greatest number ",z);
    }
    if(p>x && p>y && p>z){
        printf("%d is greatest number ",p);
    }
    return 0;
    }