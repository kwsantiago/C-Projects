#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int *sum(int a, int b);

int main(){
    int a, b, *z;
    a = 5;
    b = 6;
    z = sum(a, b);

    printf("\n%d\n", *z);
    return 0;
}// end main

int *sum(int a, int b){
    static int sum;
    sum = a + b;
    return &sum;
}
