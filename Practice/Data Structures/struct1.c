#include <stdio.h>

struct s_car{
    char *name;
    int people;
    int speed;
    int seats;
};

void printCar(struct s_car ourCar){
    printf("\nName: %s\nSpeed: %d\nPeople: %d\nSeats: %d\n", ourCar.name, ourCar.people, ourCar.speed, ourCar.seats);
}

int main(){
    struct s_car car1 = {"Focus", 5, 10, 4};
    struct s_car car2 = {"Cayman", 3, 55, 6};

    printCar(car1);
    printCar(car2);

    return 0;
}
