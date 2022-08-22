#include <stdio.h>

long int multiplyNumber(int n);
void main()
{
    int n;
    printf("Enter a positive interger: ");
    scanf("%d", &n);
    printf("Factorial of %d = %ld\n", n, multiplyNumber(n));
}
long int multiplyNumber(int n)
{
    if (n >= 1)
    {
        return n * multiplyNumber(n - 1);
    }
    else
    {
        return 1;
    }
}
