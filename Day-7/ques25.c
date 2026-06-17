#include <stdio.h>

// Recursive function to find factorial
long long factorial(int n)
{
    // Base condition
    if(n == 0 || n == 1)
    {
        return 1;
    }

    // Recursive call
    return n * factorial(n - 1);
}

int main()
{
    int number;
    long long result;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calling the recursive function
    result = factorial(number);

    // Displaying the result
    printf("Factorial of %d = %lld", number, result);

    return 0;
}