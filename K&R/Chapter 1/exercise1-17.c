#include <stdio.h>

#define MAXLEN 1000
#define LIMIT 80

// Exercise 1-17 of K&R
// Write a program to print all input lines that are longer than 80 characters.

int getLine(char ei[], int lim);

int getLine(char ei[], int lim){
    int c, i;
    
    for(i = 0; i < lim-1 && (c = getchar()) != EOF && c!= '\n'; i++)
        ei[i] = c; // add each char in current line to current element as long as above is true
    
    if(c == '\n'){ // if new line,
        ei[i] = c; // add to current element and
        ++i; // go to next element in array
    }
    ei[i] = '\0'; // add this to then end to make it a string
    return i;
}

int main(){
    char overEighty[MAXLEN];
    int len; 
    while((len = getLine(overEighty, MAXLEN)) > 0){
        if(len > LIMIT)
            printf("%s", overEighty);
    }
    return 0;
}
