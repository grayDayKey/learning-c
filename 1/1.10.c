#include <stdio.h>

int main(void)
{
    int c;
    while((c = getchar()) != EOF) {
        switch(c) {
            case '\t' :
                printf("\\t");
            case '\b' :
                printf("\\b");
            case '\\' :
                printf("\\");
                break;
            default :
                printf("%c", c);        
        }
    }
}