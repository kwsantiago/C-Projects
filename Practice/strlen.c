#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char* string = malloc(sizeof(char));
    printf("\nEnter a string: ");
    scanf("%s", string);
    printf("%s has %ld characters in it.\n", string, strlen(string));
    return 0;
}
