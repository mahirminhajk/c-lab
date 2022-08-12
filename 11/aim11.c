#include <stdio.h>
#include <math.h>

void main()
{
    int stanum, endnum, i, d = 0, temp = 0, rem = 0, sum = 0;

    printf("Enter staring interger of the range: ");
    scanf("%d", &stanum);
    printf("\nEnter ending interger of the range: ");
    scanf("%d", &endnum);

    printf("\nArmstrong numbers in given range is: ");
    for (i = stanum; i <= endnum; i++)
    {
        temp = i;
        while (temp)
        {
            temp /= 10;
            ++d;
        }
        temp = i;
        while (temp > 0)
        {
            rem = temp % 10;
            sum = sum + pow(rem, d);
            temp = temp / 10;
        }

        if (sum == i)
        {
            printf("%d, ", i);
        }
        sum = 0;
        d = 0;
        rem = 0;
    }
}
