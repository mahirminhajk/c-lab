#include <stdio.h>

int main()
{
    int limit, n1, n2, nd;
    printf("Enter a limit value: ");
    scanf("%d", &limit);
    n1 = 0;
    n2 = 1;
    nd = n1 + n2;
    if (limit > 1)
    {
        printf("Fi values: %d, %d, %d,", n1, n2, nd);
    }
    while (1)
    {
        n1 = n2;
        n2 = nd;
        nd = n1 + n2;
        if (nd > limit)
        {
            break;
        }
        printf(" %d,", nd);
    }

} // 0,1,1,2,3,5,8,13,21,34,56,.....
