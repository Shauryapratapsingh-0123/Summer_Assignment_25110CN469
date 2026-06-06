#include <stdio.h>

int main()
{
    int number, i, isPrime = 1;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // 0 and 1 are not prime numbers
    if(number <= 1)
    {
        isPrime = 0;
    }
    else
    {
        // Check for factors from 2 to number-1
        for(i = 2; i < number; i++)
        {
            if(number % i == 0)
            {
                isPrime = 0;  // Number is divisible by i
                break;
            }
        }
    }

    // Displaying the result
    if(isPrime == 1)
    {
        printf("%d is a Prime Number.", number);
    }
    else
    {
        printf("%d is not a Prime Number.", number);
    }

    return 0;
}