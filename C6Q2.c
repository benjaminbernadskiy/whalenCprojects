#include <stdio.h>

int main(void)
{
    int m, n, remainder;

    printf("two integers: ");
    if (scanf("%d %d", &m, &n) != 2)
        return 1;

    while (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    if (m < 0)
        m = -m;
    printf("greatest common divisor: %d\n", m);
    return 0;
}
