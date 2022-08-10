#include <stdio.h>

void main()
{
    int amount, notes;
    int moneys[10] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

    printf("Enter amount: ");
    scanf("%d", &amount);

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        notes = amount / moneys[i];

        if (notes)
        {
            amount = amount % moneys[i]; // remaining money
            printf("%d * %d\n", notes, moneys[i], notes * money[i]);
            
        }
    }
}
