#include <stdio.h>

int main()
{
    int rows, i, j;

    // Taking input from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print character triangle pattern
    for(i = 1; i <= rows; i++)
    {
        for(j = 0; j < i; j++)
        {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}