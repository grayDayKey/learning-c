#include <stdio.h>

#define TABLENGTH 8

void detab(int tablength);

int main()
{
    detab(TABLENGTH);
    return 0;
}

void detab(int tablength)
{
    int pos, c;
    
    pos = 0;

    while((c = getchar()) != EOF) {
        switch (c) {
            case '\t':
                do {
                    pos++;
                    putchar(' ');
                } while (pos % tablength);
                break;
            case '\n':
                pos = 0;
                break;
            default:
                putchar(c);
                pos++;
        }
    }
}

