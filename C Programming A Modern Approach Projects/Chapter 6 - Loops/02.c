#include <stdio.h>

int main(){
    int m,n,remainder;
    m = n = remainder = 0;
    printf("\nEnter two integers: ");
    scanf("%d %d",&m,&n);
    do{
        remainder = m % n;
        m = n;
        n = remainder;
    }while(n != 0);

    printf("Greatest common divisor: %d\n",m);
    return 0;
}// end main
