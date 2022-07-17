#include <stdio.h>

void main()
{
    char str[80];
    int i, flag = 1;
    printf("Enter a string : ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (flag)
        {
            printf("%c", str[i]);
            flag = 0;
        }
        else if (str[i] == ' ')
        {
            flag = 1;
        }
    }
}
