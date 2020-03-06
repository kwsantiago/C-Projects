#include <stdio.h>

int main(){
    int c, prev;
    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\t' || c == '\n'){
            if(prev != c){
                putchar('\n');
            }
        }else{
            putchar(c);
        }
        prev = c;
    }
    return 0;
}
