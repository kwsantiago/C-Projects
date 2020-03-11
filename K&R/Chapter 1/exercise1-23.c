// Exercise 1-23. Write a program to remove all comments from a C program. Don't forget to
// handle quoted strings and character constants properly. C comments don't nest. 

#include <stdio.h>

#define MAXLEN 1000

int main(){
    int c, i = 0;
    char arr[MAXLEN];
    while((c = getchar()) != EOF){
        if(c != '\t' && c != '\n'){
            if(c == '/' && getchar() == '/'){ 
                while(getchar() != '\n')
                    getchar();
            }else if(c == '/' && getchar() == '*'){ 
                while(getchar() != '\n')
                    getchar();
            }else if(c != '/' && c != '*'){
                arr[i] = c;
                ++i;
            }
        }
    }
    printf("%s", arr);
    printf("\n");
    return 0;
}
