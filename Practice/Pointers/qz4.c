#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void get_numbers(int *, int *);
int *change_sign(int *);
bool same_sign(int, int);

int main(){
    int i, j, *n1 = &i, *n2 = &j;
    get_numbers(&i, &j);
    change_sign(&i);

    if(same_sign(i, j) == true)
        printf("\n%d and %d have the same sign.\n", i, j);
    else
        printf("\n%d and %d do not have the same sign.\n", i, j);

}// end main

void get_numbers(int *x, int *y){
    printf("Enter two numbers: ");
    scanf("%d %d", x, y);
}

int *change_sign(int *z){
    *z = -1;
    return z;
}

bool same_sign(int x, int y){
    if(x * y > 0)
        return true;
    else
        return false;
}
