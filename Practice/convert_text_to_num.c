#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main(){
    char input[32];

    int ourInt = 0;
    long ourLong = 0;
    float ourFloat = 0.0;
    double ourDouble = 0.0;

    while(1){
        printf("Enter number > ");
        fgets(input, 31, stdin);
        if(strncmp(input, "quit", 4) == 0){
            printf("\nQuitting Program\n");
            break;
        }
        ourInt = atoi(input);
        ourLong = atol(input);
        ourFloat = atof(input);
        ourDouble = atof(input);

        printf("Our int: %d\n", ourInt);
        printf("Our long: %ld\n", ourLong);
        printf("Our float: %f\n", ourFloat);
        printf("Our double: %f\n", ourDouble);
    }

    return 0;
}