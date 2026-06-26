#include <stdio.h>

int main()
{
    int secret = 25;
    int guess;

    printf("Guess the number between 1 and 50.\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if(guess > secret)
        {
            printf("Too High\n");
        }
        else if(guess < secret)
        {
            printf("Too Low\n");
        }
        else
        {
            printf("Congratulations! You guessed the correct number.");
        }

    } while(guess != secret);

    return 0;
}