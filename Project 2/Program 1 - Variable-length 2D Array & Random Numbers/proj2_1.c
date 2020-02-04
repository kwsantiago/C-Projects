#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RandomNumberGenerator(const int min, const int max,const int d);

int main(void){
  srand((unsigned) time(NULL));
  generate_square();

  return 0;
}// end main

int generate_square(){
int d,sum,min,max;
  int a;

  printf("\nEnter the size of a 2D square: ");
  scanf("%d",&d);
  a = (int*) malloc(d * d * sizeof(int));

  printf("Enter min and max of random numbers to fill in the array.\n");
  printf("For example, enter -12...8 if min is -12 and max is 8, they must be separated by '...': ");
  scanf("%d ... %d",&min,&max);

  int i,j;

  for(i = 0; i<d;i++){
      for(j = 0; j<d;j++){
          a = RandomNumberGenerator(min,max,d);
          printf("%d ",a);
      }
      printf("\n");
  }

  printf("\nRow totals:");
  for(i = 0; i<d; i++){
    sum = 0;
    for(j = 0; j<d; j++)
      sum += a;
    printf(" %d", sum);
  }

  printf("\nColumn totals:");
  for (j = 0; j < d; j++) {
    sum = 0;
    for (i = 0; i < d; i++)
      sum += a;
    printf(" %d", sum);
  }

  printf("\n");
}

int RandomNumberGenerator(const int min,const int max,const int d){
  int RandomNumber = 0;
  for (int i = 0; i < d; i++){
    RandomNumber = rand()%(max-min) + min;
    return RandomNumber;
  }
}// end function
