#include <stdio.h>

void printOnOff(char name, int switchNum);
void printStatus();

                          // ABCD
int statusOfMachine = 6;  // 0110
int CheckSwitchA = 8;     // 1000
int CheckSwitchB = 4;     // 0100
int CheckSwitchC = 2;     // 0010
int CheckSwitchD = 1;     // 0001

int main(){
    printStatus();

    statusOfMachine |= CheckSwitchA;
    printStatus();

    statusOfMachine |= CheckSwitchD;
    printStatus();

    return 0;    
}

void printOnOff(char name, int switchNum){
    if(statusOfMachine & switchNum){
        printf("%c: ON\n", name);
    }else{
        printf("%c: OFF\n", name);
    }
}

void printStatus(){
    printf("\nMachine Status:\n");
    printOnOff('A', CheckSwitchA);
    printOnOff('B', CheckSwitchB);
    printOnOff('C', CheckSwitchC);
    printOnOff('D', CheckSwitchD);
    printf("\n");
}