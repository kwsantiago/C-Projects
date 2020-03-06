#include <stdio.h>

long getFactorial(int n);

long getFactorial(int n){
    if(n >= 1)
        return n * getFactorial(n-1);
    else
        return 1;
}

int main(){
    int n;
    printf("\nEnter a positive integer: ");
    scanf("%d", &n);
    printf("The factorial of %d is: %ld\n", n, (getFactorial(n)));
    return 0;
}
