#include <stdio.h>

int main(void){
    int digit1, digit2;

    printf("\nEnter a two-digit number: ");
    scanf("%1d%1d", &digit1, &digit2);

    printf("You entered the number ");

    switch(digit1){
        case 1:
            switch(digit2){
                case 0: printf("ten."); return 0;
                case 1: printf("eleven."); return 0;
                case 2: printf("twelve."); return 0;
                case 3: printf("thirteen."); return 0;
                case 4: printf("fourteen."); return 0;
                case 5: printf("fifteen."); return 0;
                case 6: printf("sixteen."); return 0;
                case 7: printf("seventeen."); return 0;
                case 8: printf("eighteen."); return 0;
                case 9: printf("nineteen."); return 0;
    }
        case 2: printf("twenty"); break;
        case 3: printf("thirty"); break;
        case 4: printf("forty"); break;
        case 5: printf("fifty"); break;
        case 6: printf("sixty"); break;
        case 7: printf("seventy"); break;
        case 8: printf("eighty"); break;
        case 9: printf("ninety"); break;
}// end switch1
    printf("-");
    switch(digit2){
        case 1: printf("one"); break;
        case 2: printf("two"); break;
        case 3: printf("three"); break;
        case 4: printf("four"); break;
        case 5: printf("five"); break;
        case 6: printf("six"); break;
        case 7: printf("seven"); break;
        case 8: printf("eight"); break;
        case 9: printf("nine"); break;
}// end switch2

    printf(".\n");

    return 0;
}// end main
