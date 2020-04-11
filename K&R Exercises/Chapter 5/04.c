// Exercise 5-4. Write the function strend(s,t), which returns 1 if the string t occurs at the end of the string s, and zero otherwise. 

#include <stdio.h>
#include <string.h>

int strEnd(char *s, char *t);

int strEnd(char *s, char *t){
    int i = strlen(t);
    while(*s++); // go to end of string
    s -= i + 1; // go back i elements which is the size of string t and add 1 to account for '\0'
    while(*s++ = *t++){ // compare each character one by one
        if(*s != *t) // if one of them don't match 
            return 0; // return 0
    }
    return 1; // else return 1 indicating that the string at the end of string s is equal to string t
}

int main(){
    char s[] = "Hello Kyle", t[] = "Kyle";
    printf("%d\n", strEnd(s, t));
    return 0;
}
