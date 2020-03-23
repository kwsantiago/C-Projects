#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    DIR *dir = opendir(".");
    struct dirent *sd;
    char **p = &argv[1];

    if(dir == NULL){
        printf("Error! Unable to open directory.\n");
        exit(1);
    }
    
    if(argc > 1 && strncmp(*p, "-a", 2) == 0){
        while((sd = readdir(dir)) != NULL){
            printf("%s ", sd->d_name);
        }
        closedir(dir);
    }

    if(argc > 1 && strncmp(*p, "-A", 2) == 0){
        while((sd = readdir(dir)) != NULL){
            printf("%s ", sd->d_name);
        }
        closedir(dir);
    }

    else if(argc == 1){
        while((sd = readdir(dir)) != NULL){
            if(sd->d_name[0] == '.')
                continue;
            printf("%s ", sd->d_name);
        }
        closedir(dir);
    }
    else{
        printf("ls: invalid option -- '%c'\n", argv[1][1]);
        exit(1);
    }
    printf("\n");
    return 0;
}
