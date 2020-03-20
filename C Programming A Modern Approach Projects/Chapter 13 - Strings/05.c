#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    int sum = 0;
    char **p = &argv[1]; // points to first input excluding filename
    for(; *p; p++) // go through the input
        sum += atoi(*p); // add the input to sum
    printf("Total: %d\n", sum); // print the total
    return 0;
}
