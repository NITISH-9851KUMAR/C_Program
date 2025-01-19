#include<stdio.h>
int factorial(int x); // function prototype 
int main(){
    /*put the value of n */
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    /*put the value of r*/
    int r;
    printf("Enter the valuse of r:");
    scanf("%d",&r);
    int nfact=factorial(n);        // these function give the value of n!
    int rfact=factorial(r);        //these funciton give the value of r!      these three are the function call ;
    int nrfact=factorial(n-r);     //these function give the value of n-r!
    int ncr=nfact/(rfact*nrfact);  //formula of ncr 
    printf("The factorial value of %dC%d :%d",n,r,ncr);
    return 0;
}
int factorial(int x)   {           //function definition 
     int fact=1;
    for(int i=1;i<=x;i++){
        fact*=i;
    }
    return (fact);
}