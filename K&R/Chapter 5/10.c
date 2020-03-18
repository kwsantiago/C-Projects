// Exercise 5-10. Write the program expr, which evaluates a reverse Polish expression from the
// command line, where each operator or operand is a separate argument. For example, 
// expr 2 3 4 + * evaluates 2 * (3+4).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define LEN 10

int rPolish(char *p){
    int nums[LEN], i = 0, j = 0, answer = 0;
    char chars[LEN];
    for(i = 0; i < LEN; i++)
        nums[i] = 0; // set everything in int array to 0
    i = 0; // reset i
    for(; *p != '\0'; p++){
        if(isdigit(*p)) // check if current element is a digit
            nums[i++] = (*p - '0'); // set element to numerical value of the char element
        else
            chars[j++] = *p; // if not just put it in the char array
    }
    // math part
    printf("%c",*p);
    return answer;
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
    char *arr = malloc(sizeof(char)), *p = arr, *start = arr;
    getInput(p);
    printf("%d\n", rPolish(p));
    return 0;
}
