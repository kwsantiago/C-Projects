// Exercise 2-3. Write a function htoi(s), which converts a string of hexadecimal
// digits (including an optional 0x or 0X) into its equivalent integer value. The
// allowable digits are 0 through 9, a through f, and A through F. 

// I chose to do this exercise with pointers instead of sending the array by value.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAXLEN 20

int htoi(char *string);

int htoi(char *string){
   int *p, n;
   n = 0;
   for(p = string; *p != '\0' && isdigit(*p); p++)
       n = 10 * n + (*p - '0');
   return n;
}

int main(){
    char *string = malloc(sizeof(char)), *p;
    printf("Enter a string of hexadecimal digits: ");
    for(p = string; p < string + MAXLEN; p++)
        scanf("%c", p);
    *p++ = '\0';
    printf("\nTo Int: %d", htoi(string));
    printf("\n");
    for(p = string; *p != '\0'; p++)
        printf("%c", *p);
    printf("\n");
   return 0;
}
