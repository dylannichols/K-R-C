#include <stdio.h>

float conversion(float f);

int main()
{
    float fahr;

    for (fahr = 0; fahr < 300; fahr += 20)
        printf("%3.0f\t%3.2f\n", fahr, conversion(fahr));

}

float conversion(float fahr)
{
    return (fahr - 32) * 5/9;
}

