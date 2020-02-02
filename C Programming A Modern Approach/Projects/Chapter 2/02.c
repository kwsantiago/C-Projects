#include <stdio.h>

#define PI 3.14159265358979323846
int main(){
    int radius = 10;
    for(int i = 0; i<2; i++)
        radius *= radius;
    float volume = (4.0f/3.0f)*PI*radius;
    printf("%f", volume);
}// end main
