#include <stdio.h>

int main()
{
    long int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 10; i < n; i *= 10)
        ;

    for (i = i / 10; n > 0; i /= 10)
    {
        printf("%d\n", n);
        n %= i;
    }
}