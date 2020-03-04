#include <stdio.h>

int main(){
                              // ABCD
    int statusOfMachine = 13; // 1101
    int CheckSwitchB = 4;     // 0100
    int CheckSwitchC = 2;     // 0010

    if((statusOfMachine & CheckSwitchB) != 0)
        printf("Switch of B is ON\n");
    else
        printf("Switch B is NOT ON\n");

    if((statusOfMachine & CheckSwitchC) != 0)
        printf("Switch of C is ON\n");
    else
        printf("Switch C is NOT ON\n");
    
}