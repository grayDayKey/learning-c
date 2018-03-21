#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float fahr_to_celsius(int);

int main()
{
    int fahr;
    printf("%3s\t%6s", "fahr", "celsius\n");
    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
        printf("%3d\t%6.1f\n", fahr, fahr_to_celsius(fahr));
    return 0;
}

float fahr_to_celsius(int fahr)
{
    return (5.0 / 9.0) * (fahr -32);
}
