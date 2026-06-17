#include <stdio.h>

int main()
{
    int size, i, j;

    // Taking input from the user
    printf("Enter the size of the square: ");
    scanf("%d", &size);

    // Print hollow square pattern
    for(i = 1; i <= size; i++)
    {
        for(j = 1; j <= size; j++)
        {
            // Print * on borders
            if(i == 1 || i == size || j == 1 || j == size)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}