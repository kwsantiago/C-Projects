// Exercise 3-2. Write a function escape(s,t) that converts characters like newline and tab into
// visible escape sequences like \n and \t as it copies the string t to s. Use a switch. Write a
// function for the other direction as well, converting escape sequences into the real characters. 

#include <stdio.h>
#include <stdlib.h>

void getLine(char *s);
void escape(char *s, const char *t);

void getLine(char *s){
    int c;
    while((c = getchar()) != EOF){
        *s = c;
        s++;
    }
    *s++ = '\0';
}

void escape(char *s, const char *t){
    const char *r;
    for(; *s != '\0'; ++s){
        for(r = t; *r != '\0'; ++r){
            switch(*r){
                case '\n':
                    *s++ = '\\';
                    *s++ = 'n';
                    *s++ = '\n';
                    break;
                default:
                    *s++ = *r;
                    break;
            }
        }
    }
    *s = '\0';
}

int main(){
    char *tmp = malloc(sizeof(char)), *arr = malloc(sizeof(char));
    getLine(tmp);
    escape(arr, tmp);
    printf("%s\n", arr);
    free(tmp);
    free(arr);
    return 0;
}
