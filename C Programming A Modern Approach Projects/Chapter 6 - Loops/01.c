#include <stdio.h>

int main(){
    float num,largest_num;
    num = largest_num = 0.0f;
    printf("\nEnter 0 to finish.");
    do{
        printf("\nEnter a number: ");
        scanf("%f",&num);
        if(num<largest_num)
        continue;
        largest_num = num;
    }while(num > 0.0f);

    printf("\nThe largest number entered was %.2f.",largest_num);

    printf("\n");
    return 0;
}// end main
