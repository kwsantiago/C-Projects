#include <stdio.h>

int menu();
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
    menu();

    return 0;
}

int menu(){
    int n = 1;
    while(n > 0){
        printf("\n\n-------------------------------------------\nMain Menu\n\n1 New Accounts\n2 All Accounts\n3 Withdraw\n4 Deposit\n5 Transfer Fund\n6 Exchange Balance\n7 High Balance\n8 Reset All Balance\n9 Change Account Number\n0 Exit\n-------------------------------------------\n-> Choose your transaction (1 ,2,..., 9, or 0 to exit): ");
        scanf("%d", &n);
        switch(n){
            case 1: printf("\new account");
                break;
            case 2: printf("\nall account");
                break;
            case 3: printf("\nwithdraw");
                break;
            case 4: printf("\ndeposit");
                break;
            case 5: printf("\ntransfer fund");
                break;
            case 6: printf("\nexchnage balance");
                break;
            case 7: printf("\nhigh balance");
                break;
            case 8: printf("\nreset all balance");
                break;
            case 9: printf("\nchange account num");
                break;
            default: break;
        }
    }
}
