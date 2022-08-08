#include <stdio.h>

void main()
{
    int a[10][10], i, j, row, col;
    printf("Enter the order: ");
    scanf("%d%d", &row, &col);

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i < j)
            {
                a[i][j] = 1;
            }
            else if (i > j)
            {
                a[i][j] = -1;
            }
            else
            {
                a[i][j] = 0;
            }
        }
    }

    printf("\nthe matrix : \n");
    for (i = 0; i < row; i++)
    {
        printf("\n");
        for (j = 0; j < col; j++)
        {
            printf("%4d", a[i][j]);
        }
    }
}