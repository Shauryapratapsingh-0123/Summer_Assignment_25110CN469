#include <stdio.h>

int main()
{
    int number, i, j;
    int largestPrimeFactor = 0;
    int isPrime;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Find all factors of the number
    for(i = 2; i <= number; i++)
    {
        if(number % i == 0)
        {
            isPrime = 1;

            // Check whether the factor is prime
            for(j = 2; j < i; j++)
            {
                if(i % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }

            // Store the prime factor
            if(isPrime == 1)
            {
                largestPrimeFactor = i;
            }
        }
    }

    // Display the result
    printf("Largest Prime Factor = %d", largestPrimeFactor);

    return 0;
}