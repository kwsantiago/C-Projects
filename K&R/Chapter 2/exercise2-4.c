#include <stdio.h>
#include <stdlib.h>

void getLine(char *p);
void squeeze(char *p, char *y);

void squeeze(char *p, char *y){
    for(; *p != '\0'; p++)
        if(*p != *y++)
            *p++ = *p;
    *p++ = '\0';
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
    char *s, *c, *p, *y;
    s = malloc(sizeof(char)), c = malloc(sizeof(char));
    p = s; // p is a pointer to array s
    y = c; // y is a pointer to array c
    getLine(p);
    getLine(y);
    p = s, y = c; // reset pointer to start of array
    squeeze(p,y);
    printf("\nSqueeze: %s\n", s);
    return 0;
}
