#include <stdio.h>

void number(int n);
void main()
{
    int n = 1;
    number(n);
}

void number(int n)
{

    if (n >= 100)
    {
        printf("finished");
    }
    else
    {
        printf("%d\t", n);
        number(++n);
    }
}