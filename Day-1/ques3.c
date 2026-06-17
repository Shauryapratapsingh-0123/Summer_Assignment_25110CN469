#include <stdio.h>

int main()
{
    int n, i;
    long long factorial = 1;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculating factorial using a loop
    for(i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    // Displaying the result
    printf("Factorial of %d = %lld", n, factorial);

    return 0;
}