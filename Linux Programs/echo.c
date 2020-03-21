#include <stdio.h>

int main(int argc, char* argv[]){
    char **p = &argv[1];
    for(; *p != NULL; p++)
        printf("%s ", *p);
    printf("\n");
    return 0;
}
