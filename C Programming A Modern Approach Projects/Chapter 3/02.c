#include <stdio.h>

int main(){
    int day,month,year,item_number = 0;
    float unit_price = 0.0;
    printf("\nEnter item number: ");
    scanf("%d",&item_number);
    printf("\nEnter unit price: ");
    scanf("%f",&unit_price);
    printf("\nEnter purchase date (mm/dd/yyy): ");
    scanf("%d /%d /%d",&day,&month,&year);

    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%d\t$%.2f\t%d/%d/%d",item_number,unit_price,month,day,year);


    return 0;
}// end main
