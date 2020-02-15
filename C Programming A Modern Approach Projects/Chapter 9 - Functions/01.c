#include <stdio.h>

#define N 10

int main(){
    int a[N];

    printf("Enter %d integers: ",N);
    for(int i = 0; i < N; i++)
    scanf("%d",&a[i]);

    selection_sort(a);

    printf("Sorted: ");
    for(int i = 0; i < N; i++)
    printf("%d ",a[i]);

    printf("\n\n");
    return 0;
}

int selection_sort(int a[]){
    if()

    int i, largest = 0;

    for(i = 1; i < N; i++)
        if(a[i]>largest)
            largest = i;

    i = a[N-1];
    a[N-1] = a[largest];
    a[largest] = i;
    selection_sort(a);
}
