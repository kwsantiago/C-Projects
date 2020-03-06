#include <stdio.h>
#include <ctype.h>

int main(){
    int i = 0, c, msg[50];
    printf("\nEnter message: ");
  
    while((c = toupper(getchar())) != EOF || c != '\n'){
        switch(c){
            case 'A': msg[i] = '4';
                break;
            case 'B': msg[i] = '8';
                break;
            case 'E': msg[i] = '3';
                break;
            case 'I': msg[i] = '1';
                break;
            case 'O': msg[i] = '0';
                break;
            case 'S': msg[i] = '5';
                break;
            default: msg[i] = c;
            }
        putchar(msg[i]);
        ++i;
    }
    return 0;
}
