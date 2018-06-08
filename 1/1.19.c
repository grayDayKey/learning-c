#include <stdio.h>

#define LIMIT 1000

int get_line(char line[]);
void reverse(char line[]);

int main() 
{
    int len;
    char line[LIMIT];
    while ((len = get_line(line)) > 0) {
        reverse(line);
        printf("%s", line);
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

void reverse(char line[]) {
    int i, j;
    char proxy[LIMIT];
    i = 0;
    j = 0;

    for (i; line[i] != '\0'; i++)
        proxy[i] = line[i];
        
    for (i = i - 2, j; i >= 0; i--, j++) {
        line[j] = proxy[i];
    }
}
