#include <stdio.h>

void main()
{
    char s[100];
    int count = 0, i;

    printf("Enter the string:\n");
    gets(s);

    for (i = 0; s[i] != '\0'; i++) // \0 is array last iteam
    {
        if (s[i] == ' ' && s[i + 1] != ' ')
        {
            count++;
        }
    }
    printf("Number of words in given string are: %d\n", count + 1);
}
