#include <stdio.h>

#define LEN 80 + 1

int read_line(char str[], int n);
void encrypt(char *message, int shift);

int read_line(char str[], int n){
    int ch, i = 0;

    while((ch = getchar()) != '\n'){
        if(i < n)
            str[i++] = ch;
    }
    str[i] = '\0';
    return i;
}

void encrypt(char *message, int shift){
    char *p;

    printf("Encrypted message: ");
    for (p = message; *p; p++) {
        if (*p >= 'A' && *p <= 'Z')
            printf("%c", ((*p - 'A') + shift) % 26 + 'A');
        else if (*p >= 'a' && *p <= 'z')
            printf("%c", ((*p - 'a') + shift) % 26 + 'a');
        else
            printf("%c", *p);
    }
}

int main(void){
    char message[LEN];
    int shift;

    printf("\nEnter message to be encrypted: ");
    read_line(message, LEN);
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);
    encrypt(message, shift);
    printf("\n\n");
    return 0;
}
