// Exercise 1-19. Write a function reverse(s) that reverses the character string s. Use it to
// write a program that reverses its input a line at a time. 

#include <stdio.h>

#define MAXLEN 20

int main(){
    int i = 0, j, c;
    char s[MAXLEN];
    printf("\nEnter a string to be reversed: ");
    while((c = getchar()) != '\n' && i < MAXLEN){
        s[i] = c;
        ++i;
    }
    printf("Reversed String: ");
    for(j = i-1; j >= 0; j--)
        printf("%c", s[j]);
    printf("\n");
    return 0;
}
