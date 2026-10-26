#include <stdio.h>

int main(void)
{
    int numerator, denominator, m, n, remainder;

    printf("fraction: ");
    if (scanf("%d /%d", &numerator, &denominator) != 2 || denominator == 0)
        return 1;

    m = numerator;
    n = denominator;
    while (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    numerator /= m;
    denominator /= m;
    if (denominator < 0) {
        numerator = -numerator;
        denominator = -denominator;
    }

    printf("lowest terms: %d/%d\n", numerator, denominator);
    return 0;
}
