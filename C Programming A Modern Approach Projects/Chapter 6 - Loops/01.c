#include <stdio.h>

int main(){
    int num,quit;
    num=quit=1;
    while(quit>0){
        printf("\nEnter a number: ");
        scanf("%d",&num);
        if(num<=0){
            printf("\nThe largest number entered was %d.",num);
            quit=0;
        }

    }
    printf("\n");
    return 0;
}// end main
