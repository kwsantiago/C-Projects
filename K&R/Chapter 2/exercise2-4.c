// Exercise 2-4. Write an alternative version of squeeze(s1,s2) that deletes each character in s1 that matches any character in the string s2. 

#include <stdio.h>
#include <stdlib.h>

void getLine(char *p);
void squeeze(char *s, const char *reject);

void squeeze(char *s, const char *reject){
    char *j = s;
    const char *r;
    for(; *s != '\0'; s++){ // go through main array, one element at a time
        for(r = reject; *r != '\0'; r++){ // go through array of stuff we don't want
            if(*s == *r) // if both elements are the same
                break; // break the loop and go to next element in main array
        }
        if(*r == '\0') // if no characters match, add to main array
            *j++ = *s;
   }
   *j = '\0';
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
    squeeze(s,c);
    printf("\nSqueeze: %s\n", s);
    return 0;
}
