#include <stdio.h>

// 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

int main(void)
{
    int n[16],rows[4],columns[4],diagonal[2];
    printf("\nEnter the numbers from 1 to 16 in any order: ");

    for(int i = 0; i<16; i++)
    scanf("%d", &n[i]);

    printf("\n%3d %2d %2d %2d\n", n[0],  n[1],  n[2],  n[3]);
    printf(  "%3d %2d %2d %2d\n", n[4],  n[5],  n[6],  n[7]);
    printf(  "%3d %2d %2d %2d\n", n[8],  n[9],  n[10], n[11]);
    printf(  "%3d %2d %2d %2d\n", n[12], n[13], n[14], n[15]);

    rows[0] = n[0] + n[1] + n[2] + n[3];
    rows[1] = n[4] + n[5] + n[6] + n[7];
    rows[2] = n[8] + n[9] + n[10] + n[11];
    rows[3] = n[12] + n[13] + n[14] + n[15];

    columns[0] = n[0] + n[4] + n[8] + n[12];
    columns[1] = n[1] + n[5] + n[9] + n[13];
    columns[2] = n[2] + n[6] + n[10] + n[14];
    columns[3] = n[3] + n[7] + n[11] + n[15];

    diagonal[0] = n[0] + n[5] + n[10] + n[15];
    diagonal[1] = n[12] + n[9] + n[6] + n[3];

    printf("\nRow sums: %d %d %d %d\n", rows[0], rows[1], rows[2], rows[3]);
    printf("Column sums: %d %d %d %d\n", columns[0], columns[1], columns[2], columns[3]);
    printf("Diagonal sums: %d %d\n", diagonal[0], diagonal[1]);

    return 0;
}
