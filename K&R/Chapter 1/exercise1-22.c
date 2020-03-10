// Exercise 1-22. Write a program to ``fold'' long input lines into two or
// more shorter lines after the last non-blank character that occurs 
// before the n-th column of input. Make sure your program does something
// intelligent with very long lines, and if there are no blanks or tabs 
// before the specified column. '

#include <stdio.h>

#define MAXLEN 1000

int main(){
    int c, len = 0, i = 0;
    char arr[MAXLEN];
    while((c = getchar()) != EOF){
        ++len;
        if(len > 5){
            if(c != '\n'){
                arr[i] = c;
                ++i;
            }
        }
        else if(c != '\n' && len <= 5){
            arr[i] = c;
            ++i;
        }
    }

    for(int j = 0; j < i; j++)
        printf("%c",arr[j]);
    printf("\n");
    return 0;
}
