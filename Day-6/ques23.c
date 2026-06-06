#include <stdio.h>

int main()
{
    int number;
    int count = 0;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Count the set bits
    while(number > 0)
    {
        if(number % 2 == 1)
        {
            count++;   // Increase count if the bit is 1
        }

        number = number / 2; // Move to the next bit
    }

    // Display the result
    printf("Number of set bits = %d", count);

    return 0;
}