#include <stdio.h>
#include <string.h>

void find_duplicate(int argc, char *argv[]);

void find_duplicate(int argc, char *argv[]){
    typedef struct pair{
        char string[10];
        int dupIndex[argc-1];
    }Pair;
    Pair array[argc];
    char **p = argv;
    int i, j, n, count;
    if(argc == 1)
        return;
    for(i = 0; i < argc; i++){
        for(j = 0; j < argc-1; j++){
            array[i].dupIndex[j] = -1; // initialize all the indices to -1 for clarity later
        }
    }
    for(i = 0; i < argc; i++){ // copy args to array
        strcpy(array[i].string, argv[i]);
    }
    for(i = 0; i < argc; i++){ // send indices of dupes into dupIndex
        for(p = argv, j = 0, n = 0; *p; p++, j++){
            if(strcmp(array[i].string, *p) == 0){
                array[i].dupIndex[n++] = j;
            }
        }
    }
    int once = 1, gotThrough = 0;
    printf("\n");
    for(i = 0, count = 1; i < argc; i++, count++){
        once = 1;
        for(j = 0; j < argc-1; j++){
            int duplicate = array[i].dupIndex[j];
            if(duplicate == -1 || ++duplicate == count) // skip unwanted
                continue;
            gotThrough = 1; // did it get to here?
            if(once == 1){ // print once per arg
                printf("argument %d (%s) is duplicated with argument ", count, array[i].string);
                once = 0;
            }
            printf(" %d", duplicate);
        }
        if(gotThrough != 0)
            printf("\n");
    }
    if(gotThrough == 0)
        printf("No duplicate arguments found\n");
}

int main(int argc, char* argv[]){
    find_duplicate(argc, argv);
    return 0;
}
