#include <stdio.h>
#include <ctype.h>

#define MAX 1000

int main(void)
{
    char message[MAX];
    char *left = message;
    char *right = message;
    int ch;

    printf("message: ");

    while (right < message + MAX &&
           (ch = getchar()) != '\n' && ch != EOF) {
        if (isalpha((unsigned char)ch))
            *right++ = (char)tolower((unsigned char)ch);
           }

    while (left < right) {
        --right;

        if (*left != *right) {
            printf("not a palindrome\n");
            return 0;
        }

        ++left;
    }

    printf("palindrome\n");
    return 0;
}