#include <stdio.h>

int main()
{
    int number, digit, reverse = 0;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Reversing the number
    while(number != 0)
    {
        digit = number % 10;               // Get the last digit
        reverse = reverse * 10 + digit;    // Add digit to the reversed number
        number = number / 10;              // Remove the last digit
    }

    // Displaying the reversed number
    printf("Reversed number = %d", reverse);

    return 0;
}