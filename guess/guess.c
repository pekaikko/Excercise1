#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(void){
    srand(time(0));
    int random_variable = rand() % 101;
    //printf("Generated number is: %d\n", random_variable);
    return random_variable;
}

int getNumber(void){
    printf("Give some number.\n");
    int value;
    scanf("%d", &value);
    //printf("Your number was %d\n", value);
    return value;
}

int compareNumbers(int generated_number, int given_number) {
    int ret_val = 0;
    
    if(given_number < generated_number){
        printf("Your number was too low.\n");
        ret_val = -1;
        }
    else if (given_number > generated_number){
        printf("Your number was too high.\n");
        ret_val = 1;
        }
    return ret_val;
}

