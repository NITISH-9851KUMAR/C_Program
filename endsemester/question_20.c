/* C Program to find Sum of Even and Odd Numbers in an Array */
#include<stdio.h>
int main()
{
 int Size, i, j = 0, a[10];
 int Even_Sum = 0, Odd_Sum = 0;
 
 printf("\n Please Enter the Size of an Array : ");
 scanf("%d", &Size);
 
 printf("\nPlease Enter the Array Elements\n");
 for(i = 0; i < Size; i++)
 {
      scanf("%d", &a[i]);
 } 
 while(j < Size)
 {
   if(a[j] % 2 == 0)
   {
 	Even_Sum = Even_Sum + a[j];
   }
   else
   {
 	Odd_Sum = Odd_Sum + a[j];
   }
   j++;
 } 
 printf("\n The Sum of Even Numbers in this Array = %d ", Even_Sum);
 printf("\n The Sum of Odd Numbers in this Array = %d ", Odd_Sum);
 return 0;
}