// Exercise 5-3. Write a pointer version of the function strcat that we showed in Chapter 2: strcat(s,t) copies the string t to the end of s. 

#include <stdio.h>

void strCat(char *s, char *t);

void strCat(char *s, char *t){
    while(*s++); // go to the end of the array
    s--; // go back one to account for '\0'
    while(*s++ = *t++); // copy contents from t to s
}

int main(){
    char s[] = "Hello ", t[] = "Kyle"; 
    strCat(s, t);
    printf("%s\n", s); 
    return 0;
}
