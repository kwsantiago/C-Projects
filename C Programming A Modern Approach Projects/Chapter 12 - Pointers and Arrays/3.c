#include <stdio.h>
#include <stdlib.h>

void readMsg();

void readMsg(){
        char c;
        char msg[100];
        int *count = &msg[0];
        printf("Enter a message: ");
        while((c = getchar()) != '\n'){
                *count = c;
                ++count;
        }
        for(count = count-1; count >= msg; count--){
                putchar(*count);
        }
        printf("\n");
}

int main(){
        readMsg();
        return 0;
}
