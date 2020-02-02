#include <stdio.h>

int main(void)
{
    int n;
    printf("\nEnter the size of a 2D square array: ");
    scanf("%d",n);
    printf("Enter min and max of random numbers to fill in the array.\n");
    printf("For example, enter -12...8 if min is -12 and max is 8, they must be separated by '...': ");

    printf("\n");

    return 0;
}// end main

int array(int n, int m, int a[n][m]){
    int i, j, sum = 0;

    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            sum += a[i][j];

    return sum;
}// end function
