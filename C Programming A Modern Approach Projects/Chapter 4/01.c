#include <stdio.h>

int main(){
    int num,digit1,digit2;
    printf("\nEnter a two-digit number: ");
    scanf("%d",&num);

    digit1 = num/10;
    digit2 = num%10;

    printf("The reversal is: %d%d\n",digit2,digit1);

    return 0;
}// end main
