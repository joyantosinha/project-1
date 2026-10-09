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

    printf("Random number: %d\n", randomNumber);
    return 0;
}