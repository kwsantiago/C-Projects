#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

// This program doesn't work as intended

int *check_smallest(int a[3][5]);
int *check(int a[3][5], int *total_number, int number);

int *check_smallest(int a[3][5]){
    int smallest = 0;
    for(int i = 0; i < 3; i++){
        if(a[i] < a[smallest])
            smallest = i;
        for(int j = 0; i < 5; i++){
            if(a[i] < a[smallest])
                smallest = j;
        }
    }
    return &a[smallest];
}

int *check(int a[3][5], int *total_number, int number){
    *total_number = 0;
    for(int i = 0; i < 3; i++){
        if(a[i] < a[number])
            (*total_number)++;
        for(int j = 0; i < 5; i++){
            if(a[i] < a[number])
                (*total_number)++;
        }
    }
    return &a[*total_number];
}

int main(){
    int a[3][5] = {{111,22,33},{44,55,77,99,100}}, *z, *total_num = NULL, number = 90;
    z = check_smallest(a);
    printf("\n%d is the largest number in the array.\n", *z);
    total_num = check(a, &total_num, number);
    printf("The total number of elements that are greater than 90 are: \n", total_num);
}


