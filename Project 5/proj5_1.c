#include <stdio.h>
#include <stdlib.h>

float min(int total, char *data[total]);  // it returns the minimum of data[1]~data[total]
float min2(int total, char *data[total]);  // it returnsthe second minimum of data[1]~data[total]
float max(int total, char *data[total]);  // it returns the maximum of data[1]~data[total]
float max2(int total, char *data[total]);  // it returns the second maximum of data[1]~data[total]
void sum_avg(int total, char *data[total], float *sum, float *avg);  // it returns the sum and average of data[1]~data[total] through its 3rd and 4th parameters, respectively.

float min(int total, char *data[total]){
    int i;
    float min = atof(data[1]); // first input excluding filename
    for(i = 2; i <= total; i++){ /// go through array starting at first input excluding filename
        if(atof(data[i]) < min) // if the floating value of teh current element is less than min
            min = atof(data[i]); // set the value of min to the floating value of current element
    }
    return min;
}

float min2(int total, char *data[total]){
    int i;
    float min, min2; 
    min = atof(data[1]); // set to first input excluding filename
    min2 = atof(data[total]); // set to last input
    for(i = 2; i <= total; i++){ // go through array starting at first input excluding filename
        if(min > atof(data[i])){ // if min is bigger than current element
            min2 = min; // set min2 to min
            min = atof(data[i]); // set min to current element
        }else if(min2 > atof(data[i]) && atof(data[i]) > min) // else if current element is smaller than min2 AND bigger than min
            min2 = atof(data[i]); // set min to current element
    }
    return min2;
}

float max(int total, char *data[total]){
    int i;
    float max = atof(data[1]); // first input excluding filename
    for(i = 2; i <= total; i++){ /// go through array starting at first input excluding filename
        if(atof(data[i]) > max) // if the floating value of teh current element is greater than max 
            max = atof(data[i]); // set the value of max to the floating value of current element
    }
    return max;
}

float max2(int total, char *data[total]){
    int i;
    float max, max2; 
    max = atof(data[1]); // set to first input excluding filename
    max2 = atof(data[total]); // set to last input
    for(i = 2; i <= total; i++){ // go through array starting at first input excluding filename
        if(max < atof(data[i])){ // if max is smaller than current element
            max2 = max; // set max2 to max
            max = atof(data[i]); // set max to current element
        }else if(max2 < atof(data[i]) && atof(data[i]) < max) // else if current element is bigger than max2 AND smaller than max
            max2 = atof(data[i]); // set max2 to current element
    }
    return max2;
}

void sum_avg(int total, char *data[total], float *sum, float *avg){
    int i;
    for(i = 1; i <= total; i++) // go through the input
        *sum += atof(data[i]); // add the input to sum
    *avg = *sum / total; // get avg by dividing sum by total
}

int main(int argc, char* argv[]){
    if(argc <= 2){
        printf("You must enter at least one number after program name.\n");
        return 0;
    }
    int total = argc-1;
    float sum = 0.0, avg = 0.0;
    float *psum = &sum, *pavg = &avg;
    for(int i = 1; i <= total; i++){ // go through the input
        if(argv[i][0] == '.') // if the first character in an input is invalid
            argv[i] = "0.0"; // set the input to 0.0
    }
    printf("Total numbers entered = %d\n", total);
    printf("min = %.3f\n", min(total, argv));
    printf("min2 = %.3f\n", min2(total, argv));
    printf("max = %.3f\n", max(total, argv));
    printf("max2 = %.3f\n", max2(total, argv));
    sum_avg(total, argv, psum, pavg);
    printf("sum = %.3f\n", *psum);
    printf("avg = %.3f\n", *pavg);
    printf("\n");
    return 0;
}
