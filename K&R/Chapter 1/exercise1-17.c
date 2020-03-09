#include <stdio.h>

#define MAXLEN 5000

// Exercise 1-17 of K&R
// Write a program to print all input lines that are longer than 80 characters.

int getLine(char ei[], int lim);

int getLine(char ei[], int lim){
    int c, i = 0, len = 0;

    while((c = getchar()) != EOF && len < lim){ // While not end of file
        ++len; // increment len
        if(c != '\n'){ // while not a space, tab, or new line
            ei[i] = c;
            ++i;
        }
    }
    ei[i] = '\0';
    return len;
}

int main(){
    char overEighty[MAXLEN];
    int len; 
    while((len = getLine(overEighty, MAXLEN)) < 80);
    printf("\n\nLines over 80:\n\n%s", overEighty);
    return 0;
}
