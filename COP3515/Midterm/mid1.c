#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

build(int a[2][4]);
int getRandom();
show(int a[2][4]);

build(int a[2][4]){
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            a[i][j] = getRandom();
        }
    }

}

int getRandom(){
   int random = rand();
   while(random == 12 || random == 15 || random == 19){
        getRandom();
   }
   return random;
}

show(int a[2][4]){
    for(int i = 0; i < 2; i++){
      for(int j = 0; j < 4; j++){
          printf("%10d", a[i][j]);
      }
      printf("\n");
  }
}

int main(){
    srand((unsigned) time(NULL));
    int a[2][4], b[2][4], c[2][4], count = 0;
    do{
        printf("\n");
        build(a);
        show(a);
        printf("\n");
        count++;
    }while(count < 1);

    do{
        printf("\n");
        build(b);
        show(b);
        printf("\n");
        count++;
    }while(count < 1);

    do{
        printf("\n");
        build(c);
        show(c);
        printf("\n");
        count++;
    }while(count < 1);
}


