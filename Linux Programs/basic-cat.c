#include <stdio.h>
#include <stdlib.h>

int main(int agrc, char *argv[]){
    char c;
    FILE *fp;

    fp = fopen(argv[1], "r"); // read only mode

    if(fp == NULL){
        printf("Failed to read file.\n");
        exit(EXIT_FAILURE);
    }

    while((c = fgetc(fp)) != EOF)
        printf("%c", c);

    fclose(fp);

    return 0;
}
