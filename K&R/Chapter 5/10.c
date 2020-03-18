// Exercise 5-10. Write the program expr, which evaluates a reverse Polish expression from the
// command line, where each operator or operand is a separate argument. For example, 
// expr 2 3 4 + * evaluates 2 * (3+4).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int rPolish(char *p){
    for(; *p != '\0'; p++){
        if(isdigit(*p))
            i = (*p - '0');
    }
    return i;
}

void getInput(char *p){
    int c;
    printf("Enter a reverse Polish expression: ");
    while((c = getchar()) != '\n'){
        if(c != ' ')
            *p++ = c;
    }
    *p = '\0';
}

int main(int argc, char *argv[]){
    char *arr = malloc(sizeof(char)), *p = arr;
    getInput(p);
    printf("%d\n", rPolish(p));
    return 0;
}
