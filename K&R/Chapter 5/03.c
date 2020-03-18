// Exercise 5-3. Write a pointer version of the function strcat that we showed in Chapter 2: strcat(s,t) copies the string t to the end of s. 

#include <stdio.h>
#include <stdlib.h>

void strCat(char *s, char *t);

void strCat(char *s, char *t){
    while(*s++);
    s--;
    while(*s++ = *t++);
}

int main(){
    char s[] = "Hello ", t[] = "Kyle"; 
    strCat(s, t);
    printf("%s\n", s); 
    return 0;
}
