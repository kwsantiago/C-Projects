#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define EMPTY '.'
#define NUM_MOVES 4
#define N 10

void generate_random_walk(char walk[N][N]);
void print_array(char walk[N][N]);

int main(void){
       char walk[N][N];

       srand((unsigned) time(NULL));
       generate_random_walk(walk);
       print_array(walk);

       return 0;
}// end main

void generate_random_walk(char walk[N][N]){
    int i, j, k, num_potential_moves, made_move;
    bool possible_move[NUM_MOVES];
    char letter;

    for(i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            walk[i][j] = EMPTY;
        }
    }// end for

    i = j = 0;

    for(letter = 'A';letter <= 'Z'; letter++){
        walk[i][j] = letter;

        for(k = 0; k < NUM_MOVES; possible_move[k] = false, k++)
        num_potential_moves = 0;

        if(i-1 >= 0 && walk[i-1][j] == EMPTY){
            possible_move[UP] = true;
            num_potential_moves++;
        }
        if(i+1 < N && walk[i+1][j] == EMPTY){
            possible_move[DOWN] = true;
            num_potential_moves++;
        }
        if(j-1 >= 0 && walk[i][j-1] == EMPTY){
            possible_move[LEFT] = true;
            num_potential_moves++;
        }
        if(j+1 < N && walk[i][j+1] == EMPTY){
            possible_move[RIGHT] = true;
            num_potential_moves++;
        }

        if(num_potential_moves == 0)
            break;

        while (true){
            made_move = rand()%NUM_MOVES;

            if (possible_move[made_move] == true){
                switch(made_move){
                    case UP: i--;
                        break;
                    case DOWN: i++;
                        break;
                    case LEFT: j--;
                        break;
                    case RIGHT: j++;
                        break;
                }
                break;
            }else{
                continue;
            }
        }// end while
    }// end for
}// end function

void print_array(char walk[N][N]){
    int i,j;
    printf("\n");
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++)
            printf("%c ", walk[i][j]);
        printf("\n");
    }
}// end function
