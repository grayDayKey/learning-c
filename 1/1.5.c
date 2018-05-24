#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float celsius_to_fahr(float celsius);

int main()
{
    float celsius;
    printf("Celsius | Fahr\n");
    for (celsius = UPPER; celsius >= LOWER; celsius -= STEP)
        printf("%7.0f | %3.1f\n", celsius, celsius_to_fahr(celsius));
    return 0;
}

float celsius_to_fahr(float celsius)
{
    return (9.0 * celsius) / 5.0 + 32.0;
}
