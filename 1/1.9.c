#include <stdio.h>

#define NONBLANK 'a'

int main()
{
    int c;
    int lastchar;
    lastchar = NONBLANK;
    while ((c = getchar()) != EOF) {
        if (!(c == ' ' && lastchar == ' ')) {
            putchar(c);
        }
        lastchar = c;
    }
    return 0;
}
