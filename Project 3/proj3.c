#include <stdio.h>

int menu();
int random_int(const int min, const int max);
/* #1 */ void new_accounts(int *, float *, int *, float *);
/* #2 */ void summary(int, float, int, float);
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
    int n = 1;
    int account_num1,account_num2;
    account_num1 = account_num2 = 0;
    float balance1,balance2;
    balance1 = balance2 = 0.0f;
    while(n != 0){
        printf("\n\n-------------------------------------------\nMain Menu\n\n1 New Accounts\n2 All Accounts\n3 Withdraw\n4 Deposit\n5 Transfer Fund\n6 Exchange Balance\n7 High Balance\n8 Reset All Balance\n9 Change Account Number\n0 Exit\n-------------------------------------------\n-> Choose your transaction (1 ,2,..., 9, or 0 to exit): ");
        scanf("%d", &n);
        printf("\n>>>> ");
        switch(n){
            case 1: new_accounts(&account_num1,&balance1,&account_num2,&balance2);
                break;
            case 2: printf("all account");
                break;
            case 3: printf("withdraw");
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

int random_int(const int min, const int max){
   return min + rand() % (max+1 - min);
}// end function
