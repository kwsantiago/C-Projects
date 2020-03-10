//Exercise 1-21. Write a program entab that replaces strings of blanks by 
//the minimum number of tabs and blanks to achieve the same spacing. 
// Use the same tab stops as for detab.
//  When either a tab or a single blank would suffice to reach a tab stop,
//  which should be given preference?
//  My answer: a tab needs to come first in order for it to work properly.

#include <stdio.h>

#define MAXLEN 300

int getLine(int arr[], int lim);

int getLine(int arr[], int lim){
    int i = 0, c, j;
    while((c = getchar()) != EOF){
        if(c == '\t'){ // if tab 
            for(j = 0; j <= 2; j++){ // add 4 spaces to the array
                arr[i] = ' ';
                ++i;
            }
        }
        if(c == ' '){ // if space
            arr[i] = ' ';
            ++i;
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
