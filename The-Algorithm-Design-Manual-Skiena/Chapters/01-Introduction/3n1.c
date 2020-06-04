#include <stdio.h>

int genNumbers(int num);

int genNumbers(int num){
    printf("%d ", num);
    if(num == 1)
        return 1;
    if(num % 2 == 0)
        genNumbers(num / 2);
    else
        genNumbers((num*3)+1);
}

int main(int argc, char* argv[]){
    genNumbers(22);
    return 0;
}
