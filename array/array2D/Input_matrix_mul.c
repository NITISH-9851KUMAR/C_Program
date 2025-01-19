#include <stdio.h>
int main()
{
    // first matrix
    int r1, c1;
    printf("Enter Order of First matrix :");
    scanf("%d %d", &r1, &c1);

    // input first matrix ;
    printf("Etner element :");
    int arr[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &arr[r1][c1]);
        }
    }

    // second matrix
    int r2, c2;
    printf("Etner order of second matrix :");
    scanf("%d %d", &r2, &c2);

    // input of second matrix
    int brr[r2][c2];
    printf("Enter element :");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &brr[i][j]);
        }
    }

    if (c1 != r2)
    {
        printf("Matrix multiplication is not possible ");
    }

    // multiplication of matrix
    else
    {

        int rs[r1][c2];
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                rs[i][j] = 0;
                for (int k = 0; k < c1; k++)
                {
                    rs[i][j] += arr[i][k] * brr[k][j];
                }
            }
        }

        // print result
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d ",rs[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
