#include<stdio.h>
#include<stdlib.h>
void  main(){
    //create a data structure with 10 size  
    int arr[10]={29,87,75,52,65,35,25,63,45,32};
    int a=0;
    int target_value=63;//This element we have to search in array data structre
    clrscr();
    for(int i=0;i<10;i++){
      if(arr[i]==target_value){
        a=1;
      }
    }
    if(a==0) printf("%d is not found in the array ",target_value);
    else printf("%d is found in the array ",target_value);
}
    