#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0;

    // Taking input from the user
    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Loop to calculate the sum of first N natural numbers
    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    // Displaying the result
    printf("Sum of first %d natural numbers = %d", n, sum);

    return 0;
}