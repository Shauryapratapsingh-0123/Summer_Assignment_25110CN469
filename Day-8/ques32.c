#include <stdio.h>

int main()
{
    int rows, i, j;

    // Taking input from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print the repeated-number pattern
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}