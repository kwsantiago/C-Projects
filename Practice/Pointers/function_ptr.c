#include <stdio.h>

int add_numbers(int a, int b){
    int sum;
    sum = a + b;
    return sum;
}

int main(int argc, char* argv[]){
    int (*myfunc_ptr)(int, int);
    myfunc_ptr = &add_numbers;
    printf("Result = %d\n", myfunc_ptr(3,7));
    return 0;
}
