#include <stdio.h>

int multiplyNumber(int n);
void main()
{
    int n;
    printf("Enter a positive interger: ");
    scanf("%d", &n);
    printf("Factorial of %d = %d\n", n, multiplyNumber(n));
}
int multiplyNumber(int n)
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