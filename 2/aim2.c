#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int v1 = 0, v2 = 1;
    int nextv = v1 + v2;
    printf("Fi values: %d, %d,", v1, v2);

    for (int i = 3; i <= n; i++)
    {
        printf("%d, ", nextv);

        v1 = v2;
        v2 = nextv;
        nextv = v1 + v2;
    }
} // 0,1,1,2,3,5,8,13,21,34,56,.....
