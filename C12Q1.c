#include <stdio.h>

#define MAX 1000

int main(void)
{
    char message[MAX];
    int ch, length = 0;

    printf("message: ");

    while (length < MAX &&
           (ch = getchar()) != '\n' && ch != EOF)
        message[length++] = (char)ch;

    printf("Reversal: ");

    while (length > 0)
        putchar(message[--length]);

    putchar('\n');
    return 0;
}