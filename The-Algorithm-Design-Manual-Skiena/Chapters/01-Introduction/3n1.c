#include <stdio.h>

int genNumbers(int num);
int genNumbersMax(int a, int b);

int genNumbers(int num){
    printf("%d ", num);
    if(num == 1)
        return 1;
    if(num % 2 == 0)
        genNumbers(num / 2);
    else
        genNumbers((num*3)+1);
}

int genNumbersMax(int a, int b){
    if(a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    int maxNum = 0;

    for(; a <= b; a++){
        int thisNumSize = genNumbers(a);
        if(thisNumSize > maxNum)
            maxNum = thisNumSize;
    }
    return maxNum;
}

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) {
        printf("%d %d %d\n", a, b, genNumbersMax(a, b));
    }
    return 0;
}
