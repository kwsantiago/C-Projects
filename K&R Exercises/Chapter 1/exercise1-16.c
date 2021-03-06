// Exercise 1-16. Revise the main routine of the longest-line program so it will correctly print the
// length of arbitrary long input lines, and as much as possible of the text. 

#include <stdio.h>
 
#define MAXLINE 1000 /* maximum input line length */

void copy(char to[], char from[]);
int getLine(char s[], int lim);

/* print the longest input line */
int main(){
    int len; /* current line length */
    int max; /* maximum length seen so far */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line saved here */
    
    max = 0;
    while((len = getLine(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
    }
    if(max > 0) /* there was a line */
        printf("\nThe longest line is: %sIts length is: %d\n", longest, max-1);
    return 0;
}

/* getLine: read a line into s, return length */
int getLine(char s[], int lim){
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

 /* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]){
    int i = 0;
    
    while ((to[i] = from[i]) != '\0')
        ++i;
}
