#include <stdio.h>

int main()
{
    int c, prev;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (prev != ' ')
                putchar(c);
                prev = c;
        }
        else
            putchar(c);
            prev = c;
    }
}