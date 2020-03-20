#include <stdio.h>

int main(int argc, char* argv[]){
    char **current = &argv[argc-1]; // last element of input
    char **first = &argv[0]; // first element of input AKA file name
    for(; current != first; current--){ // go through the array going backwards
        printf("%s ", *current); // print the current element
    }
    printf("\n");
    return 0;
}
