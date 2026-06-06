#include <stdio.h>

int main()
{
    int n, i;
    int first = 0, second = 1, next;

    // Taking input from the user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Printing the Fibonacci series
    printf("Fibonacci Series:\n");

    for(i = 1; i <= n; i++)
    {
        printf("%d ", first);

        next = first + second; // Calculate next term
        first = second;        // Update first term
        second = next;         // Update second term
    }

    return 0;
}