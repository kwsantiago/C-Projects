#include <stdio.h>
#include <stdlib.h>

void swap(int *p, int *q){
    int tmp = *p;
    *p = *q;
    *q = tmp;
}

int main(){
    int i, j, *pi = &i, *pj = &j;
    printf("\n Enter two numbers: ");
    scanf("%d %d", pi, pj);
    int tmpi = *pi, tmpj = *pj;
    swap(pi, pj);
    printf("\ni = %d and j = %d becomes i = %d and j = %d\n", tmpi, tmpj, *pi, *pj);
}
