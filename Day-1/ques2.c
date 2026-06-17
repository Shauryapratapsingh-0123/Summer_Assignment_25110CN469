#include <stdio.h>

int main()
{
    int num, i;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Displaying the multiplication table
    printf("Multiplication Table of %d:\n", num);

    // Loop runs from 1 to 10
    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}