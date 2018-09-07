#include <stdio.h>

int main()
{
    int c, i, j, n1;

    int wlength[10];

    for (i = 0; i < 10; ++i)
        wlength[i] = 0;

    n1 = 0;
    while ((c = getchar()) != '0')
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (n1 <= 10)
                ++wlength[n1 - 1];
            n1 = 0;
        }
        else
            n1++;
    }

    for (i = 0; i < 10; ++i)
    {
        j = wlength[i];
        printf("%d ", i + 1);
        while (j > 0)
        {
            printf("|");
            --j;
        }
        printf("\n");
    }

}