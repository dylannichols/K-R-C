#include <stdio.h>

int main()
{
    int c = getchar() != EOF;
    printf("%d\n", c);

    c = EOF;
    printf("%d\n", c);
}