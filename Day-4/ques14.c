#include <stdio.h>

int main()
{
    int n, i;
    int first = 0, second = 1, next;

    // Taking input from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Handling special cases
    if(n == 1)
    {
        printf("The 1st Fibonacci term is %d", first);
    }
    else if(n == 2)
    {
        printf("The 2nd Fibonacci term is %d", second);
    }
    else
    {
        // Finding the nth Fibonacci term
        for(i = 3; i <= n; i++)
        {
            next = first + second;
            first = second;
            second = next;
        }

        printf("The %dth Fibonacci term is %d", n, second);
    }

    return 0;
}