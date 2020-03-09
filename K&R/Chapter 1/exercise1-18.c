// Exercise 1-18. Write a program to remove trailing blanks and tabs from each line of input, and
// to delete entirely blank lines. 

#include <stdio.h>
#include <ctype.h>

#define MAXLEN 100

int getLine(int s[], int lim);

int getLine(int s[], int lim){
    int i = 0, c;
    while((c = getchar()) != EOF){
        if(isspace(c))
            getchar();
        else if(c != ' '){ 
            s[i] = c;
            ++i;
        }
    }
    return i;
}

int main(){
    int i, arr[MAXLEN], count = 0;

    for(i = 0; i < MAXLEN; ++i)
        arr[i] = 0;
    count = getLine(arr, MAXLEN);
    printf("\nWithout blanks:\n");
    for(i = 0; i < count; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
    return 0;
}
