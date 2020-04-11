// Exercise 2-1. Write a program to determine the ranges of char, short, int, and long
// variables, both signed and unsigned, by printing appropriate values from standard headers
// and by direct computation. Harder if you compute them: determine the ranges of the various floating-point types. 

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    printf("\nChar Range: %d to %d",CHAR_MIN, CHAR_MAX);
    printf("\nShort Range: %d to %d",SHRT_MIN, SHRT_MAX);
    printf("\nInt Range: %d to %d",INT_MIN, INT_MAX);
    printf("\nLong Range: %ld to %ld",LONG_MIN, LONG_MAX);
    
    printf("\n\nUnsigned Char Range: %d to %d", 0, UCHAR_MAX);
    printf("\nUnsigned Short Range: %d to %d",0, USHRT_MAX);
    printf("\nUnsigned Int Range: %d to %ld",0, UINT_MAX);
    printf("\nUnsigned Long Range: %d to %lu",0, ULONG_MAX);
    
    printf("\n\nFloat Range: %.10e to %.10e", FLT_MIN, FLT_MAX);
    printf("\nFloat Range: %.10e to %.10e", DBL_MIN, DBL_MAX);
    printf("\n");
    return 0;
}
