#include <stdio.h>

int main(){
    int month, day, year;
    printf("\nEnter a date (mm/dd/yyyy): ");
    scanf("%d /%d /%d",&month,&day,&year);

    printf("You entered the date: %d%d%d\n",year,month,day);

    return 0;
}// end main
