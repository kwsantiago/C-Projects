// Exercise 2-8. Write a function rightrot(x,n) that returns the value of the integer x rotated to the right by n positions. 

#include <stdio.h>

#define INT_BITS 32

unsigned int rightrot(unsigned int x, unsigned int n);

unsigned int rightrot(unsigned int x, unsigned int n){
    return (x >> n) | (x << (INT_BITS - n));
}

int main(){
    int x, n;
    x = n = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter a number to (right) rotate the previous by: ");
    scanf("%d", &n);
    printf("\n%d shifted %d right is %d.\n", x, n, rightrot(x,n));
    return 0;
}
