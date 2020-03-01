#include <stdio.h>

typedef struct{
    char *name;
    int people;
    int speed;
    int seats;
}CarType;

void printCar(CarType ourCar){
    printf("\nName: %s\nSpeed: %d\nPeople: %d\nSeats: %d\n", ourCar.name, ourCar.people, ourCar.speed, ourCar.seats);
}

int main(){
    CarType car1 = {"Focus", 5, 10, 4};
    CarType car2 = {"Cayman", 3, 55, 6};

    printCar(car1);
    printCar(car2);

    return 0;
}
