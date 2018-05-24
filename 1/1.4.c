#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
    int celsius;
    for (celsius = LOWER; celsius <= UPPER; celsius += STEP)
        printf("%3d\t%6.1f\n", celsius, (9.0 / 5.0) * (celsius + 32.0));
    return 0;    
}
