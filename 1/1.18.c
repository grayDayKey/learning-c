#include <stdio.h>

#define LIMIT 1000
#define BLANK 'a'

int get_line(char str[]);
int trim(char line[]);

int main()
{
    int len;
    char line[LIMIT];
    while ((len = get_line(line)) > 0) {
        if (trim(line) > 0) {
            printf("%s", line);
        }
    }
    return 0;
}

int get_line(char str[])
{
    int c, i;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        str[i] = c;
    }
    if (c == '\n') {
        str[i] = c;
        ++i;
    }
    str[i] = '\0';
    return i;
}

int trim(char line[])
{
    int i, j;
    int lastchar;
    lastchar = BLANK;
    j = 0;
    i = 0;
    while (line[i] != '\n') {
        if (!(lastchar == ' ' && line[i] == ' ')) {
            line[j] = line[i];
            j++;
        }
        lastchar = line[i];
        i++;
    }
    line[j] = '\n';
    j++;
    line[j] = '\0';
    return i;
}
