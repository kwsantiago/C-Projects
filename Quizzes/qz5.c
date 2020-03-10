#include <stdio.h>
#include <stdlib.h>

#define N 10

void check1(char *, char, int *);
void check2(char *, char, int *);
void display(char, int);

void check1(char *arr, char a, int *total){
    for(char* i = arr; i < arr + N; i++){
        if(*i > a)
            *total++;
    }
}

void check2(char *arr, char a, int *total){
    for(char* i = arr; i < arr + N; i++){
        if(*i < a)
            *total++;
    }
}

void display(char a, int x){
    printf(" < %c ... %d\n",a,x);
    printf(">= %c ... %d",a,9);
    printf("\n");
}

int main(){
    char a[N] = {'a','c','g','n','u','z','l','k','o','p'};
    char *p = a;
    
    for(p = a; p < a + N; p++)
        printf("  %c",*p);
    printf("\n\n");
    int totalSmaller = 0;
    check1(p, 'a', &totalSmaller);
    display('a', totalSmaller);
    printf("\n"); 
    check2(p, 'a', &totalSmaller);
    display('a', totalSmaller);
    printf("\n");
    return 0;
}
