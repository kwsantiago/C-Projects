// Exercise 2-5. Write the function any(s1,s2), which returns the first location in a string s1 where any character from the string s2 occurs,
// or -1 if s1 contains no characters from s2.

#include <stdio.h>
#include <stdlib.h>

void getLine(char *p);
int any(char *s, const char *reject);

int any(char *s, const char *reject){
    char *j = s;
    const char *r;
    int i = -1; // set to -1 to account for arrays starting at 0
    for(; *s != '\0'; ++s){ // go through main array one element at a time
        i++; // count the amount of elements checked for matching chars
        for(r = reject; *r != '\0'; ++r){ // check for matching chars
            if(*s == *r) // if matching,
                return i; // return the element where it is stored
        }
    }
    i = -1;
    return i; // else, send in -1 since no matching chars found
}

void getLine(char *p){
    int c;
    printf("Enter a string: ");
    while((c = getchar()) != EOF && c != '\n'){
        *p = c;
        p++;
    }
    *p++ = '\0';
}

int main(){
    char *s = malloc(sizeof(char)), *c = malloc(sizeof(char));
    getLine(s);
    getLine(c);
    printf("\nThe first location of '%s' in string '%s' is element [%d] (If [-1], no characters match)\n", c, s, any(s,c));
    return 0;
}
