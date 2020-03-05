#include <stdio.h>
#include <ctype.h>

int main(){
    char c;
    float word_count = 0.0f, char_count = 0.0f;
    float avg_length = 0;
    printf("\nEnter a sentence: ");
    while((c = getchar()) != '\n'){
        if(c == ' '){
            word_count++;
            continue;
        }
        char_count++;
    }
    word_count += 1; // \n breaks out so word_count needs to be incremented by1 to include the last word
    avg_length = char_count / word_count;
    printf("Average word length: %.1f\n", avg_length);
    return 0;
}
