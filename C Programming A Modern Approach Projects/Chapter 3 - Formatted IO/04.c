#include <stdio.h>

int main(){
    int area_code,middle,last;
    printf("\nEnter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d -%d",&area_code,&middle,&last);
    printf("You entered %d.%d.%d\n",area_code,middle,last);
    return 0;
}// end main
