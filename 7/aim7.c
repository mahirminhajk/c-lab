#include <stdio.h>
#include <math.h> //cc -o sphere sphere.c -lm

double series(int n);

void main()
{
    int n;
    printf("Enter the number value: ");
    scanf("%d", &n);
    double res = series(n);
    printf("answer: %.5f", res);
}

double series(int n)
{
    int i;
    double sums = 0.0, ans;
    for (i = 1; i <= n; ++i)
    {
        ans = 1 / pow(i, i);
        sums += ans;
    }
    return sums;
}