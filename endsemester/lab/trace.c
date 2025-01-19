#include <stdio.h>
#include<math.h>
int findNormal(int mat[][3], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            sum += mat[i][j] * mat[i][j];
            return sqrt(sum);
}
int findTrace(int mat[][3],int n){
    int sum=0;
    for(int i=0;i<n;i++)
    sum+=mat[i][i];
    return sum;
}
int main()
{
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int normal = findNormal(mat, 3);
    int trace = findTrace(mat, 3);
    printf("Normal of matrix :%d",normal);
    printf("\nTrace of matrix :%d",trace);
    return 0;
}