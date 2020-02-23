#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define A 22.1
#define B 33.6

float avg(float a, float b);
void avg2(float a, float b, float *ans);
float *avg3(float a, float b);

int main(){
    printf("\n%.2f", avg(A, B));

    float ans;
    avg2(A, B, &ans);
    printf("\n%.2f", ans);

    float *z;
    z = avg3(22.1, 33.6);
    printf("\n%.2f", *z);

    printf("\n");
    return 0;
}// end main

float avg(float a, float b){
    return (a+b)/2;
}

void avg2(float a, float b, float *ans){
    *ans = (a+b)/2;
}

float *avg3(float a, float b){
  float *z = malloc(sizeof(float));
  *z = avg(a, b);
  return z;
}
