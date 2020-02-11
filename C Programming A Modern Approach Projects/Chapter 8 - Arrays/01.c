#include <stdio.h>

#define N 10

int main(void){
  int num_digit_seen[N] = {0};
  int digit;
  long n;

  printf("\nEnter a number: ");
  scanf("%ld", &n);

  while(n > 0){
    digit = n % N;
    num_digit_seen[digit]++;
    n /= N;
  }

  printf("Repeated digit(s): ");

  for(n=0; n < N; n++){
    if(num_digit_seen[n] > 1)
        printf("%ld ",n);
  }

  printf("\n");
  return 0;
}// end main
