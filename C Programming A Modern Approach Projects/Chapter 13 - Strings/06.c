#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define NUM_PLANETS 9

int main(int argc, char* argv[]){
    char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
    char **i = &argv[1], **j = &planets[0];
    int count = 0;
    for(; *i != NULL; i++){
        for(; *j != NULL; j++){
            ++count;
            if(strcmp(*i, *j) == 0){
                printf("%s is planet %d", *i, count);
                break;
            }
        }
        if(*j == NULL)
            printf("%s is not a planet", *i);
    }
    printf("\n");
    return 0;
}
