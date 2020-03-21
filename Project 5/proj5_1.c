#include <stdio.h>
#include <stdlib.h>

float min(int total, char *data[total]);  // it returns the minimum of data[1]~data[total]
float min2(int total, char *data[total]);  // it returnsthe second minimum of data[1]~data[total]
float max(int total, char *data[total]);  // it returns the maximum of data[1]~data[total]
float max2(int total, char *data[total]);  // it returns the second maximum of data[1]~data[total]
void sum_avg(int total, char *data[total], float *, float *);  // it returns the sum and average of data[1]~data[total] through its 3rd and 4th parameters, respectively.

float min(int total, char *data[total]){

}

int main(int argc, char* argv[]){
    float sum = 0.0;
    char **p = &argv[1]; // points to first input excluding filename
    if(argc <= 2){
        printf("You must enter at least one number after program name.");
        return 0;
    }
    for(; *p; p++) // go through the input
        sum += atof(*p); // add the input to sum
    printf("Total: %.3f", sum); // print the total
    printf("\n");
    return 0;
}
