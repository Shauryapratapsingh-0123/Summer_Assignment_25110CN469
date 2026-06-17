#include <stdio.h>

int main()
{
    int binary, decimal = 0;
    int base = 1, remainder;

    // Taking input from the user
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    // Convert binary to decimal
    while(binary > 0)
    {
        remainder = binary % 10;   // Get the last digit
        decimal = decimal + (remainder * base);

        base = base * 2;           // Update base value
        binary = binary / 10;      // Remove the last digit
    }

    // Display the result
    printf("Decimal number = %d", decimal);

    return 0;
}