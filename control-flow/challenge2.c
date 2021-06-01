#include <stdio.h>
#include <stdlib.h>
#include <time.h> // for random number generator seed

int main(int argc, char *argv[])
{

    int randomNumber = 0;
    int guess = 0;
    int numberOfGuesses;
    time_t t;

    // initialization of random number
    srand((unsigned) time(&t));

    // get the random number
    randomNumber = rand() % 21;

    printf("\nthis is a guessing game");
    printf("\ni have choosen a number between 0 and 20, which you mjust guess!\n");

    for(numberOfGuesses = 5; numberOfGuesses > 0; --numberOfGuesses)
    {
        printf("\nyou have %i tr%s left", numberOfGuesses, numberOfGuesses == 1 ? "y" : "ies");
        printf("\nenter a guess:\n");
        scanf("%i", &guess);

        if(guess == randomNumber)
        {
            printf("\nconguratulation, you guessed it\n");
            break;
        }
        else if(guess < 0 || guess > 20)
        {
            printf("i said the number is between 0 and 20\n");
        }
        else if(randomNumber > guess)
        {
            printf("sorry %d is wrong. my number is greater than that.\n", guess);
        }
        else if(randomNumber < guess)
        {
            printf("sorry %d is wrong. my number is less than that.\n", guess);
        }
        printf("\nyou have had five tries and failed. the number was %d\n", randomNumber);

    }

    return 0;
}
