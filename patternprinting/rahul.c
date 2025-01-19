#include <stdio.h>
int main()
{
    int n = 5;
    printf("\n\n");

    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= n; j++) // for R
        {
            if (j == 0 || (i == 0 && j == 1) || (i == 0 && j == 2)
             || (i == 1 && j == 3) || (i == 2 && j == 2) || (i == 1 && j == 3)
              || (i == 3 && j == 0) || (i == 4 && j == 2) || (i == 5 && j == 3))

                printf("*");
            else
                printf(" ");
        }
        for (int j = 0; j <= n; j++) // print A
        {
            if ((i == 0 && j == 2) || (i == 1 && j == 1) ||
                (i == 1 && j == 3) || (i == 2 && j == 4) || (i == 3 && j == 0) || (i == 2 && j == 0) || (i == 3 && j == 2) || (i == 3 && j == 0) || (i == 3 && j == 1) || (i == 3 && j == 3) || (i == 3 && j == 4) || (i == 3 && j == 5) || (i == 5 && j == 0) || (i == 5 && j == 5) ||
                (i == 4 && j == 0) || (i == 4 && j == 5))

                printf("*");

            else
                printf(" ");
        }
        for (int j = 0; j <= n; j++) // loop for space
        {
            if (j == 0)
                printf(" ");
        }
        for (int l = 1; l <= n; l++) // loop for print H
        {
            if (l == 1 || l == 5 || i == 3)
                printf("*");
            else
                printf(" ");
        }
        for (int k = 1; k <= n; k++) // print spaces
        {
            if (k == 1 || k == 2)
                printf(" ");
        }
        for (int j = 0; j <= n; j++){ // print U
            if (j == 0 || i == 5 || j == 5)
                printf("*");
            else
                printf(" ");
        }
        for (int k = 1; k <= n; k++) // print spaces
        {
            if (k == 1 || k == 2)
                printf(" ");
        }
        for (int j = 0; j <= n; j++){ // loop for L
            if (i == 5 || j == 0)
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
        }

    printf("\n\n\n");
    return 0;
}