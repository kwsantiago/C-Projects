#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_int(const int min, const int max);

int main(void){
  srand((unsigned) time(NULL));
  generate_square();

  return 0;
}// end main

int generate_square(){
  int size,sum,min,max,i,j;

  printf("\nEnter the size of a 2D square: ");
  scanf("%d",&size);
  printf("\n");

  int *a[size];
  for(i = 0; i<size;i++)
  a[i] = (int*)malloc(size * size * sizeof(int));

  printf("Enter min and max of random numbers to fill in the array.\n");
  printf("For example, enter -12...8 if min is -12 and max is 8, they must be separated by '...': ");
  scanf("%d ... %d",&min,&max);
  printf("\n");

  for(i = 0; i<size;i++){
      for(int j = 0; j<size;j++){
          a[i][j] = random_int(min,max);
          printf("%6d",a[i][j]);
      }
      printf("\n");
  }

  printf("\nRow totals:");
  for (i = 0; i < size; i++) {
    sum = 0;
    for (j = 0; j < size; j++)
      sum += a[i][j];
    printf(" %d", sum);
  }

  printf("\nColumn totals:");
  for (j = 0; j < size; j++) {
    sum = 0;
    for (i = 0; i < size; i++)
      sum += a[i][j];
    printf(" %d", sum);
  }

  printf("\n");
}

int random_int(const int min, const int max){
   return min + rand() % (max+1 - min);
}// end function
