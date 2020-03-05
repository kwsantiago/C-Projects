#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c, initial, lname[25];
    int count = 0;

    printf("Enter a first and last name: ");
    scanf(" %c", &initial);
   
    while((c = getchar()) == ' '); // Skip whitespace

    while((c = getchar()) != '\n'){
        lname[count] = c;
        ++count;
    }
   
    printf("%c", toupper(lname[3])); // uppercase first letter in last name
    for(int i = 4; i < count; i++){
        printf("%c", lname[i]);
    }

    printf(", %c.", toupper(initial));

    return 0;
}