#include <stdio.h>
#include <stdlib.h>

float min(int total, char *data[total]);  // it returns the minimum of data[1]~data[total]
float min2(int total, char *data[total]);  // it returnsthe second minimum of data[1]~data[total]
float max(int total, char *data[total]);  // it returns the maximum of data[1]~data[total]
float max2(int total, char *data[total]);  // it returns the second maximum of data[1]~data[total]
void sum_avg(int total, char *data[total], float *, float *);  // it returns the sum and average of data[1]~data[total] through its 3rd and 4th parameters, respectively.

float min(int total, char *data[total]){
    int i;
    float min = atof(data[1]); // first input excluding filename
    for(i = 2; i <= total; i++){ // go through array starting at 2nd input
        if(atof(data[i]) < min) // if the floating value of teh current element is less than min
            min = atof(data[i]); // set the value of min to the floating value of current element
    }
    return min;
}

/*void sum_avg(int total, char *data[total], float *, float *){
    float sum = 0.0;
    for(; *p; p++) // go through the input
        sum += atof(*p); // add the input to sum
    printf("Total: %.3f", sum); // print the total
}*/

int main(int argc, char* argv[]){
    if(argc <= 2){
        printf("You must enter at least one number after program name.\n");
        return 0;
    }
    int total = argc-1;
    float *sum, *average;
    printf("Total numbers entered = %d\n", total);
    printf("min = %.3f\n", min(total, argv));
    printf("min2 = %.3f\n", min(total, argv));
    printf("\n");
    return 0;
}
