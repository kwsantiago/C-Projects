#include <stdio.h>

#define N 5

int main(void){
    int a[N][N] = {0},i,j,total=0;

    for(i = 0; i < N; i++){
        printf("\nEnter row %d :", i + 1);
        scanf("%d %d %d %d %d", &a[i][0], &a[i][1],
                &a[i][2], &a[i][3], &a[i][4]);
        }

    printf("\nRow totals: ");
    for(i = 0; i < N; i++){
        total = 0;
        for (j = 0; j < N; j++){
            total += a[i][j];
        }
        printf("%d ", total);
    }

    printf("\nColumn totals: ");
    for(j = 0; j < N; j++){
        total = 0;
        for(i = 0; i < N; i++){
            total += a[i][j];
        }
        printf("%d ", total);
    }

    printf("\n");
    return 0;
}// end main
