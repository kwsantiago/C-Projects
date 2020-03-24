#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>

// Kyle Santiago 3/24/2020 Quiz X

int random_ID(const int min, const int max);
void rounds(int max);

int random_ID(const int min, const int max){
   return min + rand() % (max+1 - min);
}// end function

void rounds(int max){
    int i = 0;
    printf("\t\t\t");
    for(char c = 'A'; i < max; c++, i++)
        printf("%c   ", c);
    printf("\n");
    for(i = 1; i <= max; i++){
        printf("\n\tRound - %d     ", i);
        for(int j = 1; j <= max; j++)
            printf("%3d ",random_ID(1, 15));
    }
}

int main(){
    srand((unsigned) time(NULL));
    int answer = 1;
    char str[10];
    while(answer != 0){
        printf("\n\nEnter the number of contestants (min 2, max 8, and 0 to quit): ");
        scanf("%s", str);
        if(str[0] == '$' || str[0] == '.'){
            printf("ERROR: Number of contestants must be between 2 and 8! Try again...\n");
            continue;
        }
        answer = atoi(str);
        //scanf("%d", &answer);
        if(answer < 2 || answer > 8){
            if(answer == 0)
                continue;
            printf("ERROR: Number of contestants must be between 2 and 8! Try again...\n");
            continue;
        }
        printf("\n\t\t\tContestants\n");
        rounds(answer);
    }
    return 0;
}
