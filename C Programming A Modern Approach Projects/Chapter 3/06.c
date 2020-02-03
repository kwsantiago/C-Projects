#include <stdio.h>

int main(void)
{
    int num1, num2, denominator1, denominator2, result_num, result_denominator;

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d /%d +%d /%d", &num1, &denominator1, &num2, &denominator2);

    result_num = num1 * denominator2 + num2 * denominator1;
    result_denominator = denominator1 * denominator2;
    printf("The sum is %d/%d\n", result_num, result_denominator);

    return 0;
}
