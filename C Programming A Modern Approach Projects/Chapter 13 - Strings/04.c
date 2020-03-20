#include <stdio.h>

int main(int argc, char* argv[]){
    char **current = &argv[argc-1];
    char **first = &argv[0];
    for(; current != first; current--){
        printf("%s ", *current);
    }
    printf("\n");
    return 0;
}
