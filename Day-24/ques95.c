#include <stdio.h>

int main()
{
    char str[200], longest[100];
    int i = 0, j = 0;
    int maxLen = 0, len = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ' && str[i] != '\n')
        {
            len++;
        }
        else
        {
            if(len > maxLen)
            {
                maxLen = len;
                start = i - len;
            }
            len = 0;
        }
    }

    j = 0;
    for(i = start; i < start + maxLen; i++)
    {
        longest[j] = str[i];
        j++;
    }

    longest[j] = '\0';

    printf("Longest word = %s", longest);

    return 0;
}