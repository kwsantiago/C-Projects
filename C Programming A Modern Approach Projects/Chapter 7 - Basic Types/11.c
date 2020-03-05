#include <stdio.h>
#include <ctype.h>

int main(void) {

    char c, initial;

    printf("Enter a first and last name: ");
    scanf(" %c", &initial);
    
    while((c = getchar()) != ' '); // Skip chars until whitespace
    while((c = getchar()) == ' '); // Skip whitespace

    putchar(toupper(c));
    c = getchar();

    do{
        putchar(c);
    }while((c = getchar()) != '\n' && c != ' ');

    printf(", %c.\n", toupper(initial));

    return 0;
}