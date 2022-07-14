#include <stdio.h>
#include <math.h>

double series(int n);

void main()
{
    int n;
    printf("Enter the n value: ");
    scanf("%d", &n);
    double res = series(n);
    printf("%f", res);
}

double series(int n)
{
    int i;
    double sums = 0.0, ser;
    for (i = 1; i <= n; ++i)
    {
        ser = 1 / pow(i, i);
        sums += ser;
    }
    return sums;
}