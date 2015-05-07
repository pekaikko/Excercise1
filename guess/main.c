#include <stdio.h>
#include "guess.h"

int main(int argc, char **argv){
    int generated = 0;
    int given = 0;
    int result = 0;
    int round = 0;

    generated = generateRandomNumber();
    printf("\n\n*** Guess the number game ***\n");
    printf("Guess number between 0 and 100\n");

    do {
        given = getNumber();
        result = compareNumbers(generated, given);
        round++;
    }while (result != 0);
 
    printf("Wow. You guessed the number in round %d\n", round);

    return 0;
}
