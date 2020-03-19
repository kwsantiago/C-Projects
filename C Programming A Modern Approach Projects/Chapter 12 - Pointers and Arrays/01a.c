#include <stdio.h>
#include <stdlib.h>

void readMsg();

void readMsg(){
        char c;
        int count = 0;
        char msg[100];
        printf("Enter a message: ");
        while((c = getchar()) != '\n'){
                msg[count] = c;
                ++count;
        }
        for(count = count-1; count >= 0; count--){
                putchar(msg[count]);
        }
        printf("\n");
}

int main(){
        readMsg();
        return 0;
}
