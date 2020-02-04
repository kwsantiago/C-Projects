#include <stdio.h>

int main(void)
{
    int hour,modified_hour,minute;
    printf("\nEnter a 24-hour time: ");
    scanf("%d:%d",&hour,&minute);
    modified_hour = hour;

    if(hour>12 && hour <=14)
        modified_hour -= 2;

    if(hour >=15 && hour <= 24)
        modified_hour -=12;

    printf("Equivalent 12-hour time: %d:%.2d ",modified_hour,minute);

    if(hour == 24)
        printf("AM");
    else if (hour >= 12)
        printf("PM");
    else
        printf("AM");

    printf("\n");

    return 0;
}
