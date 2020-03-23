#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    DIR *dir = opendir(".");
    struct dirent *sd;
    if(dir == NULL){
        printf("Error! Unable to open directory.\n");
        exit(1);
    }

    while((sd = readdir(dir)) != NULL){
        if(sd->d_name[0] == '.')
            continue;
        printf("%s ", sd->d_name);
    }
    printf("\n");
    closedir(dir);
    return 0;
}
