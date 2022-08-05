/*Armstrong number
 *0, 1, 153, 370, 407....
 *0^1 = 0
 *1^1 = 1
 *1^3+5^3+3^3= 153
 *4^3+0^3+7^3=407
 */
#include <stdio.h>

void main()
{
    int num, r, sum, temp;
    int strnum, endnum;

    printf("Enter starting num of range: ");
    scanf("%d", &strnum);
    printf("Enter ending num of range: ");
    scanf("%d", &endnum);

    printf("Armstrong numbers in given range are: ");
    for (num = strnum; num <= endnum; num++)
    {
        temp = num;
        sum = 0;

        while (temp != 0)
        {
            r = temp % 10;
            temp = temp / 10;
            sum = sum + (r * r * r);
        }
        if (sum == num)
        {
            printf("%d ", num);
        }
    }
    printf("\n");
}