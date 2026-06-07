#include <stdio.h>

// Recursive function to find Fibonacci term
int fibonacci(int n)
{
    // Base conditions
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }

    // Recursive call
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n, i;

    // Taking input from the user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    // Print Fibonacci series
    for(i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}