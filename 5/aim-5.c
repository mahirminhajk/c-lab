#include <stdio.h>

void main()
{
    int n, i, isPrime = 1;
    printf("Enter a integer: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        isPrime = 0;
        printf("%d\n", isPrime);
    }
    else
    {
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1)
    {
        printf("%d is prime number", n);
    }
    else if (isPrime == 0)
    {
        printf("%d is not a prime number", n);
    }
}
