#include <stdio.h>

int main()
{
    int num, count = 0;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Special case when the number is 0
    if(num == 0)
    {
        count = 1;
    }
    else
    {
        // Loop to count digits
        while(num != 0)
        {
            num = num / 10;  // Remove the last digit
            count++;         // Increase digit count
        }
    }

    // Displaying the result
    printf("Total number of digits = %d", count);

    return 0;
}