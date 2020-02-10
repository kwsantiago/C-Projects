#include <stdio.h>

int fibonacci(int i);

int main(){
    int i = 0;

    printf("\n");

    for(int i = 0; i < 25; i++)
        printf("%d ",fibonacci(i));

    printf("\n");
    return 0;
}

int fibonacci(int i){
    if(i == 0)
        return 0;
    if(i == 1)
        return 1;

    return fibonacci(i-1) + fibonacci(i-2);
}
