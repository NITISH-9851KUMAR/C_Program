#include<stdio.h>
int main(){
    // first matrix
    int a[3][2]={{1,2},{3,4},{5,6}};
    //1 2
    //3 4 
    //5 6

    // second matrix
    int b[2][4]={{1,2,3,4},{5,6,7,8}};
    // 1 2 3 4
    // 5 6 7 8

    // 3 is first matrix row, 4 is second matrix column , after multiplicaton required matrix order
    int res[3][4];

    // column of first matrix and row of second matrix 
    int cr=2;

    // multiplying 
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            // i row of a[][]and j column of b[][]
            //(a[i][0],a[i][1],a[i][2].....)*(b[0][j],b[1][j],b[2][j])
            res[i][j]=0;       
            for(int k=0;k<cr;k++){
                res[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    // print res
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}