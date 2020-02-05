#include <stdio.h>

int power(int x, int n);

int main(void){

    int x, n;
    printf("\nEnter value for x: ");
    scanf("%d", &x);
    printf("Enter value for n: ");
    scanf("%d", &n);
    printf("%d raised to the power of %d = %d\n", x, n, power(x, n));
    return 0;
}// end main

int power(int x, int n){
    if (n == 0 || x ==0 || n < 0 || x < 0){
    return 1;
    }

    if (n%2 == 0){
        int i = power(x, n/2);
        return i*i;
    }else{
        return x * power(x, n-1);
    }
}// end function
