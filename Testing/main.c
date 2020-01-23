#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    char name[5] = "Kyle";
    age = 20;
    printf("%s is %d years old.\n", name, age);

    name[0] = 'N';
    age = 44;
    printf("%s is %d years old.\n", name, age);

    char food[] = "Pizza";
    printf("%s is the best food ever.\n", food);

    strcpy(food, "chicken");
    printf("Actually, %s is the best food ever.\n", food);

    return 0;
}
