#include <stdio.h>

int getmyline(char s[], int lim);

int main()
{
    int len;
    char line[1000];

    while ((len = getmyline(line, 1000)) > 1)
        if (len > 80)
            printf("%s", line);

    return 0;
}

int getmyline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}