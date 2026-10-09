// wap to write a c programm, to calculate random number;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    // initialize random number generator.
    srand(time(0));

    // generate random number btw 1 too 100
    int randomNumber = (rand() % 100)+1;
    int no_of_guesses = 0;
    int guessed_number;

    do
    {
        printf("Guess the number: ");
        scanf("%d", &guessed_number);

        if(guessed_number>randomNumber){
            printf("Lower number please!\n");
        }
        
        else if(guessed_number<randomNumber){
            printf("Higher number please!\n");
        }

        else
        {
            printf("Congrats!!\n");
        }
        no_of_guesses++;

    } while (guessed_number != randomNumber);

    printf("You got the guessed number in %d times.", no_of_guesses);

    return 0;
}