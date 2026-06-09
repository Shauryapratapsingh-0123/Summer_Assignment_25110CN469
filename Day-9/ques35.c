#include <stdio.h>

int main()
{
    int rows, i, j;

    // Taking input from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print repeated character pattern
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%c", 'A' + i - 1);
        }

        printf("\n");
    }

    return 0;
}