#include <stdio.h>

int main()
{
    int x, n, i;
    long long result = 1;

    // Taking input from the user
    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate x raised to the power n
    for(i = 1; i <= n; i++)
    {
        result = result * x;
    }

    // Display the result
    printf("%d^%d = %lld", x, n, result);

    return 0;
}