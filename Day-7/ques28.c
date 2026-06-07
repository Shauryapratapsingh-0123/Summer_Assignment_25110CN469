#include <stdio.h>

int reverse = 0;   // Global variable to store reversed number

// Recursive function to reverse a number
void reverseNumber(int n)
{
    // Base condition
    if(n == 0)
    {
        return;
    }

    reverse = reverse * 10 + (n % 10);

    // Recursive call
    reverseNumber(n / 10);
}

int main()
{
    int number;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calling the recursive function
    reverseNumber(number);

    // Displaying the result
    printf("Reversed number = %d", reverse);

    return 0;
}