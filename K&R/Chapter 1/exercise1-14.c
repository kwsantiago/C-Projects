#include <stdio.h>
#include <ctype.h>

// Exercise 1-14 of K&R
/* Write a program to print a histogram of the frequencies of
 * different characters in its input. 
*/

#define MAX_LEN 50

int main(){
        int c, i = 0, len = 0, wordLen[MAX_LEN];
    
    printf("Enter 10 words:\n");

        // set everything in array to zero
        for(i = 0; i < MAX_LEN; i++)
                wordLen[i] = 0;

    i = 0; // reset i back to zero

    while((c = getchar()) != EOF){ // while not end of file
        if(c != ' ' || c != '\t' || c != '\n'){ // while not a space, tab, or new line
            wordLen[i] = c; // add char to the array
            ++i;
        }
    }
   
    // time to print the histogram
    printf("\nHistogram:\n\n");
  
    int currentChar; // keep track of what char we are on
    for(currentChar = 32; currentChar < 127; currentChar++){ // go through all possible chars
        printf("%c:", currentChar); // print which char we're on
        for(i = 0; i< MAX_LEN; i++){ // go through the whole array
            if(wordLen[i] == currentChar) // if the char is the same as in the array, print an * to signify a count of that char
                printf("*");
        }
        printf("\n");
    }
        printf("\n");
    return 0;
}
