#include <stdio.h>

int main(){
    int gs1_prefix,group_identifier,publisher_code,item_number,digit;
    printf("\nEnter ISBN: ");
    scanf("%d -%d -%d -%d -%d",&gs1_prefix,&group_identifier,&publisher_code,&item_number,&digit);
    printf("\nGS1 prefix: %d",gs1_prefix);
    printf("\nGroup identifier: %d",group_identifier);
    printf("\nPublisher code: %d",publisher_code);
    printf("\nItem number: %d",item_number);
    printf("\nCheck digit: %d\n",digit);
    return 0;
}// end main
