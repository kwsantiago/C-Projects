#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_racingCar{
    char name[15];
    int speed;
    struct s_racingCar *next;
    struct s_racingCar *previous;
}RacingCar;

void printList(RacingCar *start){
    RacingCar *currentCar = start;
    int count = 0;

    RacingCar *ahead = NULL;
    RacingCar *behind = NULL;

    while(currentCar != NULL){
        count++;

        ahead = currentCar->next;
        behind = currentCar->previous;

        printf("Car: %d Name: %s Speed: %d Ahead: %s Behind: %s\n", count, currentCar->name, currentCar->speed, (ahead==NULL) ? "None" : ahead->name, (behind==NULL) ? "None" : behind->name);
        currentCar = currentCar->next;
        ahead = NULL;
        behind = NULL;
    }

    printf("\nTotal Cars: %d\n", count);
}

RacingCar *MakeNewCar(){
    printf("Enter name and speed of car: ");
    char input[16];
    fgets(input, 15, stdin);

    RacingCar *newCar = malloc(sizeof(RacingCar));
    sscanf(input, "%s %d", newCar->name, &newCar->speed);
    printf("Added: %s Speed %d\n\n",newCar->name, newCar->speed);

    newCar->next = NULL;
    newCar->previous = NULL;

    return newCar;
}

RacingCar *AddToStart(RacingCar *startPtr){
    RacingCar *newCar = MakeNewCar();
    if(startPtr != NULL){
        startPtr->previous = newCar;
        newCar->next = startPtr;
    }
    return newCar;
}

RacingCar *AddToEnd(RacingCar *startPtr){
    RacingCar *returnPtr = startPtr;
    RacingCar *newCar = NULL;
    if(startPtr == NULL){
        newCar = AddToStart(startPtr);
        returnPtr = newCar;
    }else{
        RacingCar *indexCar = startPtr;
        while(indexCar->next != NULL){
            indexCar = indexCar->next;
        }
        newCar = MakeNewCar();
        indexCar->next = newCar;
        newCar->next = NULL;
        newCar->previous = indexCar;
    }
    return returnPtr;
}

RacingCar *Delete(RacingCar *startPtr){
    printf("Enter name to delete: ");
    char input[16];
    fgets(input, 15, stdin);

    RacingCar *carRef = startPtr;
    RacingCar *carToDelete = NULL;

    while(carRef != NULL){
        if(strncmp(input, carRef->name, strlen(carRef->name)) == 0){
            carToDelete = carRef;
            break;
        }
        carRef = carRef->next;
    }

    if(startPtr != NULL && carToDelete == startPtr){
        if(carToDelete->next != NULL){
            carToDelete->next->previous = NULL;
            startPtr = carToDelete->next;
        }else
            startPtr = NULL;
        // end if
        }else{
            if(carToDelete != NULL){
                if(carToDelete->previous != NULL)
                    carToDelete->previous->next = carToDelete->next;

                if(carToDelete->next != NULL)
                    carToDelete->next->previous = carToDelete->previous;
            }
        }
    if(carToDelete != NULL){
        carToDelete = NULL;
        free(carToDelete);
    }
    return startPtr;
}

RacingCar *Insert(RacingCar *startPtr){
    printf("Insert new car after car name: ");
    char input[16];
    fgets(input, 15, stdin);

    RacingCar *afterCar = startPtr;
    RacingCar *newCar = NULL;

    if(strncmp(input, afterCar->name, strlen(afterCar->name)) == 0)
            newCar = MakeNewCar();
    else{
        while(afterCar->next != NULL){
            afterCar = afterCar->next;
            if(strncmp(input, afterCar->name, strlen(afterCar->name)) == 0)
                newCar = MakeNewCar();
                break;
        }
    }
    if(newCar != NULL){
        newCar->next = afterCar->next;
        if(newCar->next != NULL)
            newCar->next->previous = newCar;
        afterCar->next = newCar;
        newCar->previous = afterCar;
    }else
        printf("Car Not Found\n");
        
    return startPtr;
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

    while(fgets(input, 15, stdin)){
        sscanf(input, "%s", command);

        if(strncmp(command, "quit", 4) == 0){
            printf("\n\nBreaking...\n");
            break;
        }else if(strncmp(command, "print", 5) == 0){
            printList(start);
        }else if(strncmp(command, "addstart", 8) == 0){
            start = AddToStart(start);
            printList(start);
        }else if(strncmp(command, "add", 3) == 0){
            start = AddToEnd(start);
            printList(start);
        }else if(strncmp(command, "delete", 6) == 0){
            start = Delete(start);
            printList(start);
        }else if(strncmp(command, "insert", 6) == 0){
            start = Insert(start);
            printList(start);
        }
    }
    CleanUp(start);
    return 0;
}