#include<stdio.h>
int main(){
int x=4,y,z; 
y=--x; // x ka value pahle kam karo phir y wale dibbe me jayo
z=x--; // x ka value dalo phir kam karo
printf("\n%d%d%d",x,y,z);
    return 0;
}
//outpur=233
