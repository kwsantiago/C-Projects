#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_racingCar{
    char name[15];
    int speed;
    struct s_racingCar *next;
}RacingCar;

void printList(RacingCar *start){
    RacingCar *currentCar = start;
    int count = 0;

    while(currentCar != NULL){
        count++;
        printf("Car: %d Name: %s Speed: %d\n", count, currentCar->name, currentCar->speed);
        currentCar = currentCar->next;
    }

    printf("\nTotal Cars: %d\n", count);
}

RacingCar *addCar(RacingCar *previous){
    printf("Enter name and speed of car: ");
    char input[16];
    fgets(input, 15, stdin);

    RacingCar *newCar = malloc(sizeof(RacingCar));
    sscanf(input, "%s %d", newCar->name, &newCar->speed);
    printf("Added: %s Speed %d\n\n",newCar->name, newCar->speed);

    newCar->next = NULL;

    if(previous != NULL)
        previous->next = newCar;
    return newCar;
}

// Clean memory from malloc
void CleanUp(RacingCar *start){
    RacingCar *freeMe = start;
    RacingCar *holdMe = NULL;

    printf("\nFreeing Memory\n");
    while(freeMe != NULL){
        holdMe = freeMe->next;
        printf("Free Name: %s Speed %d\n", freeMe->name, freeMe->speed);
        free(freeMe);
        freeMe = holdMe;
    }
}

int main(){
    char command[16];
    char input[16];

    RacingCar *start = NULL;
    RacingCar *newest = NULL;

    while(fgets(input, 15, stdin)){
        sscanf(input, "%s", command);

        if(strncmp(command, "quit", 4) == 0){
            printf("\n\nBreaking...\n");
            break;
        }else if(strncmp(command, "print", 5) == 0){
            printList(start);
        }else if(strncmp(command, "add", 3) == 0){
            if(start == NULL){
                start = addCar(NULL);
                newest = start;
            }
            else
                newest = addCar(newest);
        }
    }
    CleanUp(start);
    return 0;
}