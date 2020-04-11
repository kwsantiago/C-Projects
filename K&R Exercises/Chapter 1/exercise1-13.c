#include <stdio.h>

// Exercise 1-13 of K&R
/* Write a program to print a histogram of the lengths of words in 
 * its input. 
*/

#define MAX_LEN 10

int main(){
    int c, count = 0, i = 0, len = 0, wordLen[MAX_LEN];
    
    printf("Enter %d words:\n", MAX_LEN);

        // set everything in array to zero
        for(i = 0; i < MAX_LEN; i++)
                wordLen[i] = 0;

    i = 0; // reset i back to zero

    while((c = getchar()) != EOF){
        ++len; // count chars while not EOF (aka did not exit out of file) increment len
        if(c == ' ' || c == '\t' || c == '\n'){ // if space or tab or new line, send len to element in array and restart
            wordLen[i] = len; // add len to the array
            ++i;
            len = -1; // reset len and use -1 to account for \n
        }
    }
    wordLen[0] -= 1; // decrement by one because of \n

    printf("\nHistogram\n\n");
    // time to print out the histogram
    for(count = 1; count < MAX_LEN+1; count++){ // start at 1 and increment until MAX_LEN
    	printf("%d:", count); // print what number we are on
	for(i = 0; i < MAX_LEN; i++){ // go through the array
  	    if(wordLen[i] == count) // if the number we're on matches with the element in the array,
	        printf("*"); // print an *
    	}
	printf("\n");
    }
    printf("\n");
    return 0;
}
