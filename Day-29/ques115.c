#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice, i, length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("\nMenu\n");
    printf("1. Display String\n");
    printf("2. Find Length\n");
    printf("3. Convert to Uppercase\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("String = %s", str);
    }
    else if(choice == 2)
    {
        while(str[length] != '\0')
        {
            length++;
        }

        printf("Length = %d", length);
    }
    else if(choice == 3)
    {
        for(i = 0; str[i] != '\0'; i++)
        {
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }
        }

        printf("Uppercase String = %s", str);
    }
    else
    {
        printf("Invalid Choice");
    }

    return 0;
}