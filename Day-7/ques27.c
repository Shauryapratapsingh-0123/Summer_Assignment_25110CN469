#include <stdio.h>

// Recursive function to find sum of digits
int sumOfDigits(int n)
{
    // Base condition
    if(n == 0)
    {
        return 0;
    }

    // Recursive call
    return (n % 10) + sumOfDigits(n / 10);
}

int main()
{
    int number, sum;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calling the recursive function
    sum = sumOfDigits(number);

    // Displaying the result
    printf("Sum of digits = %d", sum);

    return 0;
}