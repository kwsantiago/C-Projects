#include <stdio.h>

#define tax 0.05
int main(){
    float value = 0.0;
    printf("\nEnter an amount: $");
    scanf("%f",&value);
    printf("With tax added: $%.2f",value+=value*tax);
    printf("\n");
}// end main
