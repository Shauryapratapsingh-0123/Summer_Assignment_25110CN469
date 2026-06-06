#include <stdio.h>

int main()
{
    int number, originalNumber;
    int digit, reverse = 0;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Store the original number for comparison
    originalNumber = number;

    // Reverse the number
    while(number != 0)
    {
        digit = number % 10;               // Get the last digit
        reverse = reverse * 10 + digit;    // Form the reversed number
        number = number / 10;              // Remove the last digit
    }

    // Check if the original and reversed numbers are equal
    if(originalNumber == reverse)
    {
        printf("%d is a Palindrome Number.", originalNumber);
    }
    else
    {
        printf("%d is not a Palindrome Number.", originalNumber);
    }

    return 0;
}