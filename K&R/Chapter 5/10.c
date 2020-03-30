// Exercise 5-10. Write the program expr, which evaluates a reverse Polish expression from the
// command line, where each operator or operand is a separate argument. For example, 
// expr 2 3 4 + * evaluates 2 * (3+4).

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define STACK_SIZE 1024

double stack[STACK_SIZE];
int stack_height = 0;

void push(double value){
    if(stack_height == STACK_SIZE){
        perror("Stack too high!");
        exit(EXIT_FAILURE);
    }
    stack[stack_height++] = value;
}

double pop(){
    if(stack_height == 0){
        perror("Stack too high!");
        exit(EXIT_FAILURE);
    }
    return stack[--stack_height];
}

int main(int argc, char* argv[]){
    int i;

    for(i = 0; i < argc; ++i){
        switch(argv[i][0]){
            case '1': case '2': case '3': case '4': case '5': case '6':case '7': case '8': case '9':
                push(atof(argv[i]));
                break;
            case '+':
                push(pop() + pop());
                break;
            case '-':
                push(pop() - pop());
                break;
            case '*':
                push(pop() * pop());
                break;
            case '/':
                push(pop() / pop());
                break;
        }
    }
    printf("%g\n", pop());
    return 0;
}
