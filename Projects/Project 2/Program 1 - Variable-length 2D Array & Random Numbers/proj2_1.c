#include <stdio.h>

int main(void)
{
    int a[n];

    printf("Enter the size of a 2D square array: ");
    scanf("%d", n);

  printf("\nRow totals:");
  for (i = 0; i < N; i++) {
    sum = 0;
    for (j = 0; j < N; j++)
      sum += a[i][j];
    printf(" %d", sum);
  }

  printf("\nColumn totals:");
  for (j = 0; j < N; j++) {
    sum = 0;
    for (i = 0; i < N; i++)
      sum += a[i][j];
    printf(" %d", sum);
  }
  printf("\n");

  return 0;
}
