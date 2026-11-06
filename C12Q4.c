#include <stdio.h>

#define MAX 1000

int main(void)
{
    char message[MAX];
    char *p = message;
    int ch;

    printf("Message: ");

    while (p < message + MAX &&
           (ch = getchar()) != '\n' && ch != EOF)
        *p++ = (char)ch;

    printf("Reversal: ");

    while (p > message)
        putchar(*--p);

    putchar('\n');
    return 0;
}