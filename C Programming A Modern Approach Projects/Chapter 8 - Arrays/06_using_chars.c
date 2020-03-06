#include <stdio.h>
#include <ctype.h>

int main(){
    int c;
    printf("\nEnter message: ");
    
    while((c = toupper(getchar())) != EOF || c != '\n'){
        if(c != ' '){
            switch(c){
                case 'A': c = '4';
                    break;
                case 'B': c = '8';
                    break;
                case 'E': c = '3';
                    break;
                case 'I': c = '1';
                    break;
                case 'O': c = '0';
                    break;
                case 'S': c = '5';
                    break;
            }
        } 
        putchar(c);
    }
    return 0;
}
