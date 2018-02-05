#include <stdio.h>

int main()
{
    int fahr;
    printf("%3s\t%6s", "fahr", "celsius\n");
    for (fahr = 0; fahr <= 300; fahr += 20)
        printf("%3d\t%6.1f\n", fahr, (5.0 / 9./0) * (fahr - 32));
    return 0;
}