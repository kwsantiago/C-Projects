// Exercise 1-20. Write a program detab that replaces tabs in the input 
// with the proper number
// of blanks to space to the next tab stop. Assume a fixed set of tab 
// stops, say every n columns.
// Should n be a variable or a symbolic parameter? 
#include <stdio.h>

#define MAXLEN 50

int getLine(int arr[], int lim);

int getLine(int arr[], int lim){
    int i = 0, c, j;
    while((c = getchar()) != EOF){
        if(c == '\t'){ // if tab 
            for(j = 0; j <= 7; j++){ // add 4 spaces to the array
                arr[i] = ' ';
                ++i;
            }
        }
        else{ // else, add input to array
            arr[i] = c;
            ++i;
        }
    }
    return i;
}

int main(){
    int count, i, arr[MAXLEN];

    for(i = 0; i < MAXLEN; ++i)
        arr[i] = 0;
    count = getLine(arr, MAXLEN);
    for(i = 0; i < count; i++){
        printf("%c", arr[i]);
    }
    return 0;
}
