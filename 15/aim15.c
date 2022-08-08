#include <stdio.h>

void main()
{
    FILE *fp1, *fp2;
    int limit, i;
    int nums[1000];
    int num;

    printf("Enter the limit number: ");
    scanf("%d", &limit);

    for (i = 1; i <= limit; i++)
    {
        nums[i - 1] = i;
    }

    fp1 = fopen("odd.txt", "w");  // 1,3
    fp2 = fopen("even.txt", "w"); // 2,4
    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Error!: opeing the file");
        exit(1);
    }

    for (i = 0; i < limit; i++)
    {
        if (nums[i] % 2 == 0)
        {
            fprintf(fp2, "%d\n", nums[i]);
        }
        else
        {
            fprintf(fp1, "%d\n", nums[i]);
        }
    }

    fclose(fp1);
    fclose(fp2);
    printf("writen to the file\n");
}