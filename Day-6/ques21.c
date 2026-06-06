#include <stdio.h>

int main()
{
    int decimal, binary[32];
    int i = 0, j;

    // Taking input from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Special case for 0
    if(decimal == 0)
    {
        printf("Binary number = 0");
        return 0;
    }

    // Convert decimal to binary
    while(decimal > 0)
    {
        binary[i] = decimal % 2; // Store remainder
        decimal = decimal / 2;   // Divide by 2
        i++;
    }

    // Print binary number in reverse order
    printf("Binary number = ");

    for(j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }

    return 0;
}