#include <stdio.h>

#define MAXLEN 1000

// Exercise 1-17 of K&R
// Write a program to print all input lines that are longer than 80 characters.

void getLine(char ei[], int lim);

void getLine(char ei[], int lim){
    int c, i = 0, len = 0;

    while((c = getchar()) != EOF && len < lim){ // While not end of file
        ++len; // increment len
        if(c != ' ' || c != '\t' || c != '\n'){ // while not a space, tab, or new line
            ei[i] = c;
            ++i;
            len = 0;
        }
        if(len > 80)
            printf("hhello\n");
    }
    ei[i] = '\0';
}

int main(){
    char overEighty[MAXLEN];
    getLine(overEighty, MAXLEN);
    printf("\n\nLines over 80:\n\n%s", overEighty);
    return 0;
}
