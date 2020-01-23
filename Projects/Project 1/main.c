#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("\n");
    printf("Enter either 191 or 919, anything else will quit: ");
    scanf("%d", &i);
    printf("\n");
    if(i==191 || i==919){
        if(i==191){
        printf("191");
        }
        else if(i==919){
        printf("919");
    }
    }// end if
    else {
        printf("Goodbye!");
    }

    return 0;
}
