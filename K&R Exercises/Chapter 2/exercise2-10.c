// Exercise 2-10. Rewrite the function lower, which converts upper case letters to lower case, with a conditional expression instead of if-else. 

#include <stdio.h>
#include <ctype.h>

int lower(int c);

int lower(int c){
    return (isupper(c)) ? (c + 'a' - 'A') : c;
}

int main(){
    int i;
    printf("Enter a letter: ");
    scanf("%c", &i);
    printf("\nLower case: %c\n", lower(i));
    return 0;
}
