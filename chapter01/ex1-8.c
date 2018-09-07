#include <stdio.h>

int main()
{
    int n, b, t, c;
    n = 0;
    b = 0;
    t = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            ++n;
        if (c == '\b')
            ++b;
        if (c == '\t')
            ++t;
    }

    printf("\\n\t%d\n\\b\t%d\n\\t\t%d\n", n, b, t);
}