#include <stdio.h>

void main()
{
    FILE *fp1, *fp2;
    int limit, i;
    int num;

    printf("Enter the limit number: ");
    scanf("%d", &limit);

    fp1 = fopen("odd.txt", "w");  // 1,3
    fp2 = fopen("even.txt", "w"); // 2,4

    for (i = 1; i <= limit; i++)
    {
        if (i % 2 == 0)
        {
            fprintf(fp2, "%d\n", i);
        }
        else
        {
            fprintf(fp1, "%d\n", i);
        }
    }

    fclose(fp1);
    fclose(fp2);
    printf("writen to the file\n");
}