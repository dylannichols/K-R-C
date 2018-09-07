#include <stdio.h>

#define MAX 1000

void getmyline(char s[], int lim);
void reverse(char s[]);

int main()
{
    char line[MAX];

    getmyline(line, MAX);
    printf("%ld", sizeof(line));
    printf("\n%s", line);
    reverse(line);
    printf("\n%s", line);

    return 0;
}

void getmyline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    s[i] = '\0';
}

void reverse(char s[])
{
    int i, j;
    char hold;

    if (s[0] == '\0')
        return;
    for (i = 0; s[i] != '\0'; ++i) 
        ;
    j = i - 1;
    for (i = 0; i < j; ++i)
    {
        hold = s[i];
        s[i] = s[j];
        s[j] = hold;
        --j;
    }
}
