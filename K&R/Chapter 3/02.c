// Exercise 3-2. Write a function escape(s,t) that converts characters like newline and tab into
// visible escape sequences like \n and \t as it copies the string t to s. Use a switch. Write a
// function for the other direction as well, converting escape sequences into the real characters. 

#include <stdio.h>
#include <stdlib.h>

void getLine(char *s);
void escape(char *s, char *t);

void getLine(char *s){
    int c;
    while((c = getchar()) != EOF){
        *s = c;
        s++;
    }
    *s++ = '\0';
}

void escape(char *s, char *t){
    for(; *s != '\0'; s++){
        switch(*s){
            case '\n':
                *s = '\\';
                *s++ = '\n';
                *s++ = '\n';
                s++;
                break;
            default:
                *t = *s;
                t++;
                s++;
                break;
        }
    }
}

int main(){
    char *s = malloc(sizeof(char)), *t = malloc(sizeof(char));
    getLine(s);
    escape(t, s);
    printf("%s\n", t);
    free(s);
    free(t);
    return 0;
}
