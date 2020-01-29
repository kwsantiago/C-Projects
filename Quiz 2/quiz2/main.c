#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    float y;
    float avg = (float)(x+y)/2;
    int run = 1;
    while(run == 1){
    printf("Enter two integers seperated by '.' (e.g. -5.12: \n");
    scanf("%f,%f",&x,&y);
    if(x>0){
    printf("MAX = %f\nAVG = %f",x,avg);
    }else{
    run = 0;
    }
}// end while
    return 0;
}
