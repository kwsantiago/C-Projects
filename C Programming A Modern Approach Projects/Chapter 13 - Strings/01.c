#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getInput(char *arr, char *sm, char *la);

int getInput(char *arr, char *sm, char *la){
    while(strlen(arr) != 4){
        printf("Enter word: ");
        scanf("%s", arr);
        if(strcmp(arr, sm) < 0)
            strcpy(sm, arr);
        else if(strcmp(arr, la) > 0)
            strcpy(la, arr);
    }
}

int main(){
    char *arr = malloc(sizeof(char)), *smallest = malloc(sizeof(char)), *largest = malloc(sizeof(char));
    printf("Enter word: ");
    scanf("%s", arr);
    strcpy(smallest, (strcpy(largest, arr)));
    getInput(arr, smallest, largest);
    printf("\nSmallest word: %s\nLargest word: %s\n", smallest, largest);
    free(arr);
    free(smallest);
    free(largest);
    return 0;
}
