// Exercise 2-2. Write a loop equivalent to the for loop above without using && or || 
/* Original: 
for (i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i) 
   s[i] = c;
*/

#include <stdio.h>

#define lim 100

int main(){
    int i = 0, c;
    char s[lim];
    while(i < lim-1 && (c = getchar()) != '\n' && c != EOF){
        s[i] = c;
        ++i;
    }
    return 0;
}
