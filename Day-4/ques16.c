#include <stdio.h>

int main()
{
    int start, end, number;
    int digit, sum, temp;

    // Taking range input from the user
    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    // Check each number in the range
    for(number = start; number <= end; number++)
    {
        sum = 0;
        temp = number;

        // Find the sum of cubes of digits
        while(temp != 0)
        {
            digit = temp % 10;
            sum = sum + (digit * digit * digit);
            temp = temp / 10;
        }

        // Check if the number is Armstrong
        if(sum == number)
        {
            printf("%d ", number);
        }
    }

    return 0;
}