// Exercise 1-23. Write a program to remove all comments from a C program
// Don't forget to handle quoted strings and character constants properly.
// C comments don't nest. 

#include <stdio.h>

#define MAXLEN 2000

int getInput(char arr[]);
void printResult(char arr[], int i);

int getInput(char arr[]){
    int c, i = 0;
    printf("Enter the C code where you want the comments removed:\n");
    while((c = getchar()) != EOF){
        if(c == '\n'){ // add new line if new line encountered
            arr[i] = '\n';
            ++i;
        }
        if(c != '\n'){
            if(c == '/'){ // if input is /
                if(c == '/' || c == '*'){ // check for / and *
                    while(getchar() != '\n')
                       getchar();
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
    printf("\nWithout comments:\n");
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
