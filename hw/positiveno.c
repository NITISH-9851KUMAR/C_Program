/*Input: N = 3
Output: 3 is positive

Input: N = -454
Output: -454 is negative*/
#include<stdio.h>
int main(){
int x;
printf("Enter a number :");
scanf("%d",&x);
if(x>0){
    printf("%d is positive",x);
}
 else if(x<0) {
    printf("%d is negitive",x);
}
else printf("%d is equal to 0",x);
    return 0;
}