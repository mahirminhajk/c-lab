#include <stdio.h>

void main()
{
    int A[10][10], AT[10][10], row, col, i, j;

    printf("Enter row and col: ");
    scanf("%d %d", &row, &col);

    printf("Enter the value of the matrix: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter the element of %d %d: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf(" %d ", A[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            AT[j][i] = A[i][j];
        }
    }

    printf("\nTranpose of Matrix A: =  \n");
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf(" %d ", AT[i][j]);
        }
        printf("\n");
    }
}
