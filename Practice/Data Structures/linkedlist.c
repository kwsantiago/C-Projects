#include <stdio.h>
#include <string.h>

typedef struct{
    char name[8];
    int speed;
}RacingCar;

const int MaxCars = 4;

void printList(RacingCar carArray[], int num){
    printf("Car List:\n");
    int carIndex = 0;
    RacingCar *car;

    for(carIndex = 0; carIndex < num; carIndex++){
        car = &carArray[carIndex];
        printf("Car: %d Name: %s Speed: %d\n-------------\n",
            carIndex+1,
            car->name,
            car->speed
        );
    }
    printf("Total of %d cars\n", num);
}

int AddCar(RacingCar *car){
    printf("Enter name and speed of car: ");
    char input[16];
    fgets(input, 15, stdin);
    int ok = 0;

    int res = sscanf(input, "%s %d", car->name, &car->speed);

    if(res == 2){
        ok = 1;
        printf("Added: %s with speed: %d\n\n", car->name, car->speed);
    }else
        printf("Sorry, error parsing input.\n\n");

    return ok;
}

int main(){
    RacingCar allCars[MaxCars];
    int numCars = 0;

    char command[16];
    char input[16];

    while(fgets(input, 15, stdin)){
        sscanf(input, "%s", command);

        if(strncmp(command, "quit", 4) == 0){
            printf("\n\nBreaking...\n");
            break;
        }else if(strncmp(command, "print", 5) == 0){
            printList(allCars, numCars);
        }else if(strncmp(command, "add", 3) == 0){
            if(numCars < MaxCars)
            numCars += AddCar(&allCars[numCars]);
            else
                printf("Sorry, list is full.\n\n");
        }
    }
    return 0;
}