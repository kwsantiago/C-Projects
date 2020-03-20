#include <stdio.h>

int main(int argc, char* argv[]){
    char **p = &argv[argc-1];
    for(; p != &argv[0]; p--){
        printf("%s ", *p);
    }
    printf("\n");
    return 0;
}
