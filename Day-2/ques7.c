#include <stdio.h>

int main()
{
    int number, digit;
    int product = 1;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Special case for 0
    if(number == 0)
    {
        product = 0;
    }
    else
    {
        // Calculating the product of digits
        while(number != 0)
        {
            digit = number % 10;      // Get the last digit
            product = product * digit; // Multiply the digit with product
            number = number / 10;     // Remove the last digit
        }
    }

    // Displaying the result
    printf("Product of digits = %d", product);

    return 0;
}