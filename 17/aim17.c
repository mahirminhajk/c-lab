#include <stdio.h>

void main()
{
    int l1, l2, lf, i, j, k, temp;
    int a[100], b[100], c[200];

    printf("Enter the size of first array: ");
    scanf("%d", &l1);
    printf("Enter the size of second array: ");
    scanf("%d", &l2);
    lf = l1 + l2;

    printf("Enter the first array elements:\n ");
    for (i = 0; i < l1; i++)
    {
        scanf("%d", &a[i]);
        c[i] = a[i];
    }
    k = l1;
    printf("Enter the second array elements:\n ");
    for (i = 0; i < l2; i++)
    {
        scanf("%d", &b[i]);
        c[k] = b[i];
        k++;
    }

    printf("After merging a and b array: \n");
    for (i = 0; i < lf; i++)
    {
        printf("%d\t", c[i]);
    }

    for (i = 0; i < lf; i++)
    {
        for (j = 0; j < lf - i; j++)
        {
            if (c[j] > c[j + 1])
            {
                temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }

    printf("\nAfter sorting \n");
    for (i = 0; i < lf; i++)
    {
        printf("%d\t", c[i]);
    }
}