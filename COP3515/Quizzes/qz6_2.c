#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){
    char **p = argv, **longest = &argv[argc-1];
    int i = 0;
    printf("\nThe longest command line argument(s): ");
    if(argc == 1){
        printf(" %s\n", *p);
        return 0;
    }
    for(; *p; p++){
        if(strlen(*p) == strlen(*longest))
            printf(" %s ", *p);
        else if(strlen(*p) > strlen(*longest)){
            printf(" %s ", *p);
            longest = p;
        }
    }
    printf("\n");
    return 0;
}
