#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */
// Exercise 1.15. Rewrite the temperature conversion program of Section 1.2 to use a function
// for conversion. 

void convert(int* fahr, int *celsius);

void convert(int* fahr, int *celsius){
    *celsius = 5 * (*fahr-32) / 9;
}

int main(){
    int fahr, celsius;
    int lower, upper, step;
    lower = 0; /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    fahr = lower;
    while(fahr <= upper){
        convert(&fahr, &celsius);
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}
