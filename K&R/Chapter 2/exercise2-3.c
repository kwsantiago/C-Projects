// Exercise 2-3. Write a function htoi(s), which converts a string of hexadecimal
// digits (including an optional 0x or 0X) into its equivalent integer value. The
// allowable digits are 0 through 9, a through f, and A through F. 

// I chose to do this exercise with pointers instead of sending the array by value.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

void getLine(char *p);
int htoi(char *p);

void getLine(char *p){
    int c;
    printf("Enter a string of hexadecimal digits: ");
    while((c = getchar()) != EOF && c != '\n'){
        *p = c;
        p++;
    }
    *p++ = '\0';
}

int htoi(char *p){
    int n, i;
    n = i = 0;
    if((*p - '0') == 0){
        ++p;
        ++p;
    }
    for(;*p != '\0'; p++){
        int c = tolower(*p);
        if(c >= '0' && c <= '9')
            n = 16 * n + (c - '0');
        else if(c >= 'a' && c <= 'f')
            n = 16 * n + (c - 'a' + 10);
    }
    return n;
}

int main(){
    char *s = malloc(sizeof(char)), *p = s;
    getLine(p);
    p = s; // reset pointer to start of array
    printf("\nThe integer value of %s is %d.\n", s, htoi(p));
    return 0;
}
