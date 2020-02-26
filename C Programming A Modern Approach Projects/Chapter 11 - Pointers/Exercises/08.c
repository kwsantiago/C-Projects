#include <stdio.h>
#include <stdlib.h>

int *find_largest(int a[], int n){
    int largest = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > a[largest])
            largest = i;
    }
    return &a[largest];
}

int main(){
    int a[10] = {99,22,55,66,44,22,66,88,44,10}, *z,n= 10;
    z = find_largest(a, n);
    printf("\n%d is the largest number in the array.\n", *z);
}
