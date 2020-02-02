#include <stdio.h>

int main(void)
{
    int twenties,tens,fives,ones,amount = 0;
    printf("Enter a dollar amount: ");
    scanf("%d",&amount);

    twenties = amount/20;
    amount -= twenties*20;

    tens = amount/10;
    amount -= tens*10;

    fives = amount/5;
    amount -= fives*5;

    ones = amount/1;
    amount -= ones*1;

    printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d",twenties,tens,fives,ones);

    printf("\n");
    return 0;
}
