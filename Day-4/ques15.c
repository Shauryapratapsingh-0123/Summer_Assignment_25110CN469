#include <stdio.h>

int main()
{
    int number, originalNumber;
    int digit, sum = 0;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Store the original number
    originalNumber = number;

    // Calculate the sum of cubes of digits
    while(number != 0)
    {
        digit = number % 10;  // Get the last digit
        sum = sum + (digit * digit * digit);
        number = number / 10; // Remove the last digit
    }

    // Check whether the number is Armstrong or not
    if(sum == originalNumber)
    {
        printf("%d is an Armstrong Number.", originalNumber);
    }
    else
    {
        printf("%d is not an Armstrong Number.", originalNumber);
    }

    return 0;
}