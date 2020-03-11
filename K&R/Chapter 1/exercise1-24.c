// Exercise 1-24. Write a program to check a C program for rudimentary syntax errors like
// unmatched parentheses, brackets and braces. Don't forget about quotes, both single and
// double, escape sequences, and comments. (This program is hard if you do it in full generality.) 

#include <stdio.h>

#define MAXLEN 2000

int getInput(char arr[]);
void printResult(char arr[], int i);

int getInput(char arr[]){
    int c, i = 0;
    printf("Enter the C code that you want checked for sytax errors:\n");
    while((c = getchar()) != EOF){
        if(c == '\n'){ // add new line if new line encountered
            arr[i] = '\n';
            ++i;
        }
        if(c != '\n'){
            arr[i] = c;
            ++i;
            if(c == '('){
                while(getchar() != '\n'){
                    if(c != ')'){
                       // arr[i] = ')';
                        //++i;
                    }
                }
            }else{ // else, pass input into array
                arr[i] = c;
                ++i;
            }
        }
    }
    arr[i] = 0;
    return i;
}

void printResult(char arr[], int i){
    int j;
    for(j = 0; j < 17; j++)
        printf("_");
    printf("\nFixed Code\n");
    for(j = 0; j < 17; j++)
        printf("_");
    printf("\n\n");
    for(int j = 0; j < i; j++)
        printf("%c", arr[j]);
    printf("\n");
}

int main(){
    int i;
    char arr[MAXLEN];
    i = getInput(arr);
    printResult(arr, i);
    return 0;
}
