#include <stdio.h>

int main()
{
    int num, sum = 0, rev = 0, d;
    printf("Enter the number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        d = num % 10;
        num /= 10;
        sum += d;
        rev = rev * 10 + d;
    }

    printf("Sum of digits = %d", sum);
    printf("\n Reverse of digits = %d", rev);

    return 0;
}