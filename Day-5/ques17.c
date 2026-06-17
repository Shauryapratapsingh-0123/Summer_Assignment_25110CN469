#include <stdio.h>

int main()
{
    int number, i;
    int sum = 0;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Find all proper divisors and add them
    for(i = 1; i < number; i++)
    {
        if(number % i == 0)
        {
            sum = sum + i;
        }
    }

    // Check whether the number is perfect
    if(sum == number)
    {
        printf("%d is a Perfect Number.", number);
    }
    else
    {
        printf("%d is not a Perfect Number.", number);
    }

    return 0;
}
