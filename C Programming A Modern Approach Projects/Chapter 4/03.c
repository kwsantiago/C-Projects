#include <stdio.h>

int main(void)
{
    int digit1, digit2, digit3;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &digit1, &digit2, &digit3);

    printf("The reversal is: %d%d%d", digit3, digit2, digit1);

    return 0;
}
