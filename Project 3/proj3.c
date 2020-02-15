#include <stdio.h>

int menu();
int random_int(const int min, const int max);
/* #1 */ void new_accounts(int *account_num1, float *balance1, int *account_num2, float *balance2);
/* #2 */ void summary(int account_num1, float balance1, int account_num2, float balance2);
/* #3 */ void withdraw(int, float *, float);
/* #4 */ void deposit(int, float *, float);
/* #5 */ void transfer(int, float *, int, float *, float);
/* #6 */ void exchange(int, float *, int, float *);
/* #7 */ int *high_balance(int *, float, int *, float, float *);
/* #8 */ void reset(float *, float *);
/* #9 */ void change(int *, int);

int main(){
    srand((unsigned) time(NULL));
    menu();

    return 0;
}// end main

int menu(){
    int tmp1, n = 1;
    tmp1 = 0;
    int account_num1,account_num2;
    account_num1 = account_num2 = 0;
    float tmp2, balance1,balance2;
    tmp2 = balance1 = balance2 = 0.0f;
    while(n != 0){
        printf("\n\n-------------------------------------------\nMain Menu\n\n1 New Accounts\n2 All Accounts\n3 Withdraw\n4 Deposit\n5 Transfer Fund\n6 Exchange Balance\n7 High Balance\n8 Reset All Balance\n9 Change Account Number\n0 Exit\n-------------------------------------------\n-> Choose your transaction (1 ,2,..., 9, or 0 to exit): ");
        scanf("%d", &n);
        printf("\n>>>> ");
        switch(n){
            case 1: new_accounts(&account_num1,&balance1,&account_num2,&balance2);
                break;
            case 2: summary(account_num1, balance1, account_num2, balance2);
                break;
            case 3: printf("Enter account to withdraw (%d or %d): ",account_num1,account_num2);
                    scanf("%d",&tmp1);
                    if(tmp1 != account_num1 && tmp1 != account_num2){
                        printf("\n>>>> Account %d doesn't exist!",tmp1);
                        break;
                    }
                    printf("Enter amount to withdraw: $");
                    scanf("%f",&tmp2);
                    if(tmp1 == account_num1)
                    withdraw(tmp1, &tmp2, balance1);
                    else if(tmp1 == account_num2)
                    withdraw(tmp1, &tmp2, balance2);
                break;
            case 4: printf("deposit");
                break;
            case 5: printf("transfer fund");
                break;
            case 6: printf("exchnage balance");
                break;
            case 7: printf("high balance");
                break;
            case 8: printf("reset all balance");
                break;
            case 9: printf("change account num");
                break;
            case 0: printf("GOOD BYE!\n");
                break;
        }
    }
}// end function

void new_accounts(int *account_num1, float *balance1, int *account_num2, float *balance2){
    *account_num1 = random_int(55,59);
    *account_num2 = random_int(55,59);
    *balance1 = (float)((random_int(-10000,99999))/100.0f);
    *balance2 = (float)((random_int(-10000,99999))/100.0f);
    printf("Two accounts created!");
}// end function

void summary(int account_num1, float balance1, int account_num2, float balance2){
    printf("%d: $%.2f\n",account_num1,balance1);
    printf(">>>> %d: $%.2f",account_num2,balance2);
}// end function

void withdraw(int tmp1, float *tmp2, float balance){

    printf("\n>>>> Account %d balance changed from $%.2f to $%.2f",tmp1,*tmp2,balance);
}// end function

int random_int(const int min, const int max){
   return min + rand() % (max+1 - min);
}// end function
