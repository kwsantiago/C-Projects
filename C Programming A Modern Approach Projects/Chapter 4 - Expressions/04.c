#include <stdio.h>

int main(){
    int num;
    printf("\nEnter a number between 0 and 32767: ");
    scanf("%d", &num);

    int n1, n2, n3, n4, n5;
    n1 = n2 = n3 = n4 = n5 = 0;

    n5 = num % 8;
    n4 = (num / 8) % 8;
    n3 = ((num / 8) / 8) % 8;
    n2 = (((num / 8) / 8) / 8) % 8;
    n1 = ((((num / 8) / 8) / 8) / 8) % 8;

    printf("In octal, your number is: %d%d%d%d%d\n", n1, n2, n3, n4, n5);

    return 0;
}
