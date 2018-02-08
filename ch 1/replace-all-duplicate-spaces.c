#include <stdio.h>

int main(void)
{
    int c, ws;
    while((c = getchar()) != EOF) {
        ws = (c == ' ') ? ws + 1 : 0;
        if (ws < 2) {
            putchar(c);
        }
    }
}