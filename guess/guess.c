#include <string.h>
#include <stdio.h>
#include <ctype.h>
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
    int value = 1;
    int chars = 0;
    int i = 0;
    char input_string[100];
    scanf("%s", input_string);
    //int string_size = (int)strlen(input_string);

    printf("String was %s\n and size was %zu\n", input_string, strlen(input_string));

    for(i=0; i<strlen(input_string); i++){
        chars++;
    }
    if (chars > 3){
        printf("Too many characters!\n");
        return 0;
    }
    for(i=0; i<chars; i++){
        char a = input_string[i];
        
        if (!isdigit(a)){
            printf("Not a valid number!\n");
            return 0;
        }
    }
    value = atoi(input_string);    
    printf("Value as an integer: %d\n", value);
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

