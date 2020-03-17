#include <stdio.h>
#include <stdlib.h>

int getInput(char *arr, char *sm, char *la);

int getInput(char *arr, char *sm, char *la){
    int c, i = 0;
    char *tmp = arr;  
    while((c = getchar()) != '\n'){
        i++;
        *arr = c;
        arr++;
    }
    *arr = '\0';
    for(; *tmp != '\0'; tmp++){
        *sm = *tmp;
        *la = *tmp;
        sm++;
        la++;
    }
    return i;
}

int main(){
    char *arr = malloc(sizeof(char)), *smallest = malloc(sizeof(char)), *largest = malloc(sizeof(char));
    int n;
    do{
        printf("Enter word: ");
    }while((n = getInput(arr, smallest, largest)) != 4);
    printf("\nSmallest word: %s\nLargest word: %s\n", smallest, largest);
    free(arr);
    free(smallest);
    free(largest);
    return 0;
}
