#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#define MAX_MSG_LEN 80

void get_msg(char message[], int *length);
bool palindrome(char message[], int length); 

void get_msg(char message[], int *length){
    char ch;
    int count = 0;

    printf("Enter a message: ");
    while((ch = getchar()) != EOF && ch != '\n') {
        if (tolower(ch) >= 'a' && toupper(ch) <= 'z'){
            message[count] = tolower(ch);
            count++;
        }
    }
    *length = count;
}

bool palindrome(char message[], int length){
    char *ptr_start = message, *ptr_end = ptr_start + length - 1;

    while(ptr_start < ptr_end){
        if (*ptr_start++ != *ptr_end--)
            return false;
    }
    return true;
}

int main(void){
    char message[MAX_MSG_LEN];
    int *length = (int*)malloc(sizeof(message));
    get_msg(message, length);
    printf("%salindrome\n", palindrome(message, *length) ? "P" : "Not a p");
    free(length);
    return 0;
}