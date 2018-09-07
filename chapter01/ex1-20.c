#include <stdio.h>

#define TAB 4
#define MAXLINE 1000

void readline(char s[]);
void printline(char s[]);

char input[MAXLINE];
char c;

int main()
{
    readline(input);
    printline(input);
}

void readline(char s[])
{
    int i;
    i = 0;
    while ((c = getchar()) != '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
}

void printline(char s[])
{
    int i;
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == '\t')
            printf("    ");
        else
            putchar(s[i]);

        ++i;
    }
    putchar('\n');

}