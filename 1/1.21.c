#include <stdio.h>

void entab(int tablen);

int main()
{
    entab(8);
    return 0;
}

void entab(int tablen)
{
    int pos, c;

    pos = 0;

    while ((c = getchar()) != EOF) {
        switch (c) {
            case '\t':
                pos += tablen;
                break;
            case ' ':
                pos++;
                break;
            default:
                while(pos > 0) {
                    if (pos / tablen > 0) {
                        putchar('\t');
                        pos -= tablen;
                    } else {
                        putchar(' ');
                        pos--;
                    }
                }

                putchar(c);
        }
    }
}

