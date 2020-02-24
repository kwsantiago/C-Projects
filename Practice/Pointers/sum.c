#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int *sum(int a, int b);

int main(){
    int a, b, *c;

    printf("\nInput the first number: ");
    scanf("%d",&a);
    printf("\nInput the second number: ");
    scanf("%d",&b);
    c = sum(a, b);

    printf("The sum of %d and %d is %d",a,b,*c);

    printf("\n");
    return 0;
}

int *sum(int a, int b){
    static int c;
    c = a + b;
    return &c;
}
