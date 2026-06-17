#include <stdio.h>

int main()
{
    int number, digit, sum = 0;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculating the sum of digits
    while(number != 0)
    {
        digit = number % 10;   // Get the last digit
        sum = sum + digit;     // Add the digit to sum
        number = number / 10;  // Remove the last digit
    }

    // Displaying the result
    printf("Sum of digits = %d", sum);

    return 0;
}