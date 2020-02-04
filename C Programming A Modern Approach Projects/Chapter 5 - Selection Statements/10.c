#include <stdio.h>

int main(void)
{
    int grade,temp;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if(grade<0 || grade>100){
        printf("Error, grade must be between 0 and 100.");
        return 0;
    }

    temp = grade/10;
    switch (temp) {
        case 9: case 10: printf("Letter Grade: A");break;
        case 8: printf("Letter Grade: B");break;
        case 7: printf("Letter Grade: C");break;
        case 6: printf("Letter Grade: D");break;
        default: printf("Letter Grade: F");break;
    }
    printf("\n");
    return 0;
}
