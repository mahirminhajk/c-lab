#include <stdio.h>
#include <string.h>

void checkStr(char str[]);

void main()
{
    char str[100];

    printf("Enter the word: ");
    scanf("%s", &str);
    checkStr(str);
}

void checkStr(char str[])
{
    int s0 = 0;
    int sn = strlen(str) - 1;

    while (s0 < sn)
    {
        if (str[s0++] != str[sn--])
        {
            printf("%s is not a palindrome\n", str);
            return;
        }
    }
    printf("%s is a palindrome\n", str);
}