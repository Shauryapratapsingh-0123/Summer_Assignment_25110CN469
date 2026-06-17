#include <stdio.h>

int main()
{
    int number, originalNumber;
    int digit, i;
    int sum = 0, factorial;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Store the original number
    originalNumber = number;

    // Find the sum of factorials of digits
    while(number != 0)
    {
        digit = number % 10;   // Get the last digit

        factorial = 1;

        // Calculate factorial of the digit
        for(i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
        }

        sum = sum + factorial;
        number = number / 10;  // Remove the last digit
    }

    // Check whether the number is a Strong Number
    if(sum == originalNumber)
    {
        printf("%d is a Strong Number.", originalNumber);
    }
    else
    {
        printf("%d is not a Strong Number.", originalNumber);
    }

    return 0;
}