#include <stdio.h>

int main()
{
    int start, end, i, j, isPrime;

    // Taking range input from the user
    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    // Check each number in the range
    for(i = start; i <= end; i++)
    {
        isPrime = 1;

        // 0 and 1 are not prime numbers
        if(i <= 1)
        {
            isPrime = 0;
        }
        else
        {
            // Check if the number is prime
            for(j = 2; j < i; j++)
            {
                if(i % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
        }

        // Print the number if it is prime
        if(isPrime == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}