#include <stdio.h>

int main(void)
{
    double balance[5];
    int rate, years, year, month, i;

    printf("interest rate: ");
    scanf("%d", &rate);
    printf("number of years: ");
    scanf("%d", &years);

    printf("\nYears");
    for (i = 0; i < 5; i++) {
        printf("%6d%%", rate + i);
        balance[i] = 100.00;
    }
    printf("\n");

    for (year = 1; year <= years; year++) {
        for (month = 1; month <= 12; month++) {
            for (i = 0; i < 5; i++) {
                balance[i] += balance[i] * (rate + i) / 100.0 / 12.0;
            }
        }

        printf("%3d ", year);
        for (i = 0; i < 5; i++) {
            printf("%7.2f", balance[i]);
        }
        printf("\n");
    }

    return 0;
}
