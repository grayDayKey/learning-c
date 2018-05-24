#include <stdio.h>

#define MAXLINE 10
#define LIMIT 1000

int get_line(char str[]);
void copy(char to[], char from[], int index);

int main()
{
    int len, index;
    char current[LIMIT];
    char longstrs[LIMIT];
    index = 0;
    while ((len = get_line(current)) > 0) {
        if (len > MAXLINE) {
            copy(longstrs, current, index);
            index = index + len;
        }
    }
    printf("%s", longstrs);
    return 0;
}

int get_line(char str[])
{
    int c, i;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        str[i] = c;
    }
    str[i] = '\0';
    return i;
}

void copy(char to[], char from[], int index)
{
    int i;
    i = 0;
    while ((to[i + index] = from[i]) != '\0')
        i++;    
};
