#include <stdio.h>
#include <string.h>

typedef struct s_racingCar{
    char name[15];
    int speed;
    struct s_racingCar *next;
}RacingCar;

void printList(RacingCar *start){
    RacingCar *currentCar = start;
    int count = 0;;

    while(currentCar != NULL){
        count++;
        printf("Car: %d Name: %s Speed: %d\n", count, currentCar->name, currentCar->speed);
        currentCar = currentCar->next;
    }

    printf("\nTotal Cars: %d\n", count);
}

int main(){
    RacingCar MonsterEnergy = {"MonsterEnergy", 150, NULL};
    RacingCar Formula1 = {"Formula1", 200, NULL};
    RacingCar McLaren = {"McLaren", 166, NULL};
    RacingCar RedBull = {"RedBull", 134, NULL};
    RacingCar Buggy = {"Buggy", 50, NULL};

    MonsterEnergy.next = &Formula1;
    Formula1.next = &McLaren;
    McLaren.next = &RedBull;
    RedBull.next = &Buggy;

    printList(&MonsterEnergy);

    return 0;
}