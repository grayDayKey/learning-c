#include <stdio.h>

int main()
{
    long ws, tab, nl;
    int c;

    ws = 0, tab = 0, nl = 0;

    while((c = getchar()) != EOF) {
        switch(c) {
            case ' ' :
                ++ws;
                break;
            case '\t' :
                ++tab;
                break;
            case '\n' :
                ++nl;
                break;
            default :
                ;    
        }
    }
    printf("%s\t%ld\n", "count of whitespace:", ws);
    printf("%s\t%ld\n", "count of tabs:", tab);
    printf("%s\t%ld\n", "count of new lines:", nl);
}