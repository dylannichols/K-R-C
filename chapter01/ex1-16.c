#include <stdio.h>
#define MAXLINE 1000

int getmyline(char line[], int maxline);
int copy(char to[], char from[], int start);

int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    int lengths[MAXLINE];
    char text[MAXLINE];
    
    int i, j;
    i = j = 0;

    max = 0;
    while ((len = getmyline(line, MAXLINE)) > 1)
    {
        lengths[i] = len;
        i++;

        j += copy(text, line, j);
    }
    for (i = 0; lengths[i] != 0; ++i)
        printf("%d ", lengths[i]);

    printf("\n%s", text);
    
    return 0;
}

int getmyline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

int copy(char to[], char from[], int start)
{
    int i;
    
    i = 0;
    while ((to[start + i] = from[i]) != '\0')
        ++i;

    return i;
}