// Exercise 1-22. Write a program to ``fold'' long input lines into two or
// more shorter lines after the last non-blank character that occurs 
// before the n-th column of input. Make sure your program does something
// intelligent with very long lines, and if there are no blanks or tabs 
// before the specified column. '

#include <stdio.h>

#define MAXLEN 1000
#define TOOBIG 10

int main(){
    int n, c, len = 0, j = 0, i = 0;
    char arr[MAXLEN], half[MAXLEN];
    while((c = getchar()) != EOF){
        ++len;
        if(c != ' ' && c != '\t' && c != '\n'){
            if(len > TOOBIG){
                half[j] = c;
                ++j;
            }else if(len <= TOOBIG){
                arr[i] = c;
                ++i;
            }
        }else if(c == ' '){
            if(len > TOOBIG){
                half[j] = c;
                half[++j] = '\n';
                ++j;
            }else if(len <= TOOBIG){
                arr[i] = c;
                arr[++i] = '\n';
                ++i;
            }
        }
    }// end while
    
    if(i > 0){
        
        for(n = 0; n < i/2; n++){
            printf("%c",arr[n]);
        }
        printf("\n");
        for(n = i/2; n < i; n++){
            printf("%c",arr[n]);
        }
        printf("\n");
    }
    if(j > 0){
        for(n = 0; n < j/2; n++){
            printf("%c",half[n]);
        }
        printf("\n");
        for(n = j/2; n < j; n++){
            printf("%c",half[n]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
