#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void readMsg();
int numVowels(char msg[100], int count);

int numVowels(char msg[100], int count){
    int numVowels = 0;
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

    for(int i = 0; i < count; i++){
        for(int j = 0; j < 6; j++){
            if(msg[i] == vowels[j] || msg[i] == (toupper(vowels[j])))
                numVowels++;
        }
    }
    return numVowels;
}

void readMsg(){
    char c;
    int count = 0;
    char msg[100];
    printf("Enter a sentence: ");
    while((c = getchar()) != '\n'){
        msg[count] = c;
        ++count;
    }
    printf("Your sentence contains %d vowels.\n", numVowels(msg, count));
}

int main(){
        readMsg();
        return 0;
}