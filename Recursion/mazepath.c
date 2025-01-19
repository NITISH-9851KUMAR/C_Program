#include<stdio.h>
int maze(int cr,int cc,int er,int ec){
    // cr=current rows 
    // cc=current coulumn
    // er =ending rows
    // ec=ending coulumn
    int rightways =0;
    int downways =0;
    if(cr==er && cc==ec) return 1;
    if(cr==er){ // only rightways call
        rightways +=maze(cr,cc+1,er,ec);
    }
    if(cc==ec){ // only downways call
        downways +=maze(cr+1,cc,er,ec);
    }
    if(cr<er&&cc<ec){
        rightways +=maze(cr,cc+1,er,ec);
        downways +=maze(cr+1,cc,er,ec);
    }
    int totalways=rightways +downways ;
    return totalways;
}
int main(){
int n;
printf("Enter no of rows :");
scanf("%d",&n);
int m;
printf("Enter no of column :");
scanf("%d",&m);
int ways =maze(1,1,m,n);
printf("%d",ways);
    return 0;
}