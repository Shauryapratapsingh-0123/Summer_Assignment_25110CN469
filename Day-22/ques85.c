#include <stdio.h>

int main()
{
    char str[100];
    int length = 0, i;
    int palindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    while(str[length] != '\0')
    {
        length++;
    }

    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

    if(palindrome == 1)
    {
        printf("String is Palindrome");
    }
    else
    {
        printf("String is Not Palindrome");
    }

    return 0;
}