#include <stdio.h>

int main(void)
{
    float loan_amount, interest_rate, monthly_payment;
    printf("\nEnter amount of loan: ");
    scanf("%f",&loan_amount);
    printf("\nEnter interest rate: ");
    scanf("%f",&interest_rate);
    float monthly_interest = ((interest_rate/100)/12)+1;
    printf("\nEnter monthly payment: ");
    scanf("%f",&monthly_payment);

    loan_amount *= monthly_interest;
    loan_amount -= monthly_payment;

    printf("\nBalance remaining after first payment: %.2f", loan_amount);

    loan_amount *= monthly_interest;
    loan_amount -= monthly_payment;
    printf("\nBalance remaining after second payment: %.2f",loan_amount);

    loan_amount *= monthly_interest;
    loan_amount -= monthly_payment;
    printf("\nBalance remaining after third payment: %.2f",loan_amount);

    printf("\n");
    return 0;
}
