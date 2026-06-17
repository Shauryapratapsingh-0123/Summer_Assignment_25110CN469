#include <stdio.h>

int main()
{
    int number, i;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Printing the factors of the number
    printf("Factors of %d are:\n", number);

    for(i = 1; i <= number; i++)
    {
        // Check if i is a factor of the number
        if(number % i == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}