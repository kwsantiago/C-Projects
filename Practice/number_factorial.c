#include <stdio.h>

int factorial(int i);

int main(){
    int i;
    printf("\nEnter a number to perform factorial on: ");
    scanf("%d",&i);
    printf("The factorial of %d is %d.\n",i,factorial(i));

    return 0;
}

int factorial(int i){
    if(i<=1)
        return 1;
    return i * factorial(i-1);
}
