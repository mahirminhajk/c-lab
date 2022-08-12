#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>

void main()
{
    int amount, notes, i;
    int moneys[10] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    // clrscr();

    printf("Enter amount: ");
    scanf("%d", &amount);

    printf("\n");

    for (i = 0; i < 10; i++)
    {
        notes = amount / moneys[i];

        if (notes)
        {
            amount = amount % moneys[i]; // remaining money
            printf("%d * %d\n", notes, moneys[i]);
        }
    }
    // getch();
}