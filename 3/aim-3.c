#include <stdio.h>

void main()
{
    int i, j, n;
    // clrscr();
    printf("Enter the number of the row:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) // run 6 times
    {
        // space print
        for (j = 1; j <= (n - i); j++)
        {
            printf(" ");
        }
        //* print
        for (j = 1; j <= ((2 * i) - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // getch();
}
