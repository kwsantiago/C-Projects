#include <stdio.h>

#define PI 3.14159265358979323846
int main(){
    float radius = 0.0;
    printf("\nInput radius: ");
    scanf("%f",&radius);
    for(int i = 0; i<2; i++)
        radius *= radius;
    float volume = (4.0f/3.0f)*PI*radius;
    printf("The volume of this circle is %.2f.", volume);
    printf("\n");
}// end main
