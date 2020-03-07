#include <stdio.h>

// Exercise 1-13 of K&R
/* Write a program to print a histogram of the lengths of words in 
 * its input. 
*/

#define MAX_LEN 10

int main(){
        int c, i = 0, len = 0, wordLen[MAX_LEN];
    
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
    printf("1:");
    for(i = 0; i < MAX_LEN; i++){
       if(wordLen[i] == 1)
            printf("*"); 
    }
    printf("\n2:");
    for(i = 0; i < MAX_LEN; i++){
        if(wordLen[i] == 2)
            printf("*");
    }
    printf("\n3:");
    for(i = 0; i < MAX_LEN; i++){
        if(wordLen[i] == 3)
            printf("*");
    }
    printf("\n4:");
    for(i = 0; i < MAX_LEN; i++){
        if(wordLen[i] == 4)
            printf("*");
    }
    printf("\n5:");
    for(i = 0; i < MAX_LEN; i++){
    if(wordLen[i] == 5)
       printf("*");
    }
    printf("\n6:");
    for(i = 0; i < MAX_LEN; i++){
        if(wordLen[i] == 6)
            printf("*");
    }
    printf("\n7:");
    for(i = 0; i < MAX_LEN; i++){
        if(wordLen[i] == 7)
            printf("*");
    }
    printf("\n8:");
    for(i = 0; i < MAX_LEN; i++){
        if(wordLen[i] == 8)
            printf("*");
    }
    printf("\n9:");
    for(i = 0; i < MAX_LEN; i++){
        if(wordLen[i] == 9)
            printf("*");
    }
    printf("\n10:");
    for(i = 0; i < MAX_LEN; i++){
        if(wordLen[i] == 10)
            printf("*");
    }
        printf("\n");
    return 0;
}
