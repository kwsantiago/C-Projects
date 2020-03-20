#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETS 9

int nocase_strcmp(const char *s1, const char *s2);

int nocase_strcmp(const char *s1, const char *s2){
    int i;
    for(i = 0; tolower(s1[i]) == tolower(s2[i]); i++){
        if(s1[i] == '\0')
            return 0;
    }
    return s1[i] - s2[i];
}

int main(int argc, char* argv[]){
    char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
    char **i = &argv[1], **j = &planets[0];
    int count = 0;
    for(; *i != NULL; i++){
        for(; *j != NULL; j++){
            ++count;
            if(nocase_strcmp(*i, *j) == 0){
                printf("%s is planet %d", *i, count);
                break;
            }
        }
        if(*j == NULL)
            printf("%s is not a planet", *i);
    }
    printf("\n");
    return 0;
}
