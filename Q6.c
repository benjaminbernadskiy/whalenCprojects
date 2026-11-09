#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};

int compare_dates(struct date d1, struct date d2)
{
    if (d1.year < d2.year)
        return -1;
    if (d1.year > d2.year)
        return 1;

    if (d1.month < d2.month)
        return -1;
    if (d1.month > d2.month)
        return 1;

    if (d1.day < d2.day)
        return -1;
    if (d1.day > d2.day)
        return 1;

    return 0;
}

int main(void)
{
    struct date first, second;
    int result;

    printf("Enter first date: ");
    if (scanf("%d /%d /%d", &first.month, &first.day, &first.year) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter second date: ");
    if (scanf("%d /%d /%d", &second.month, &second.day, &second.year) != 3) {
        printf("wrong input.\n");
        return 1;
    }

    result = compare_dates(first, second);

    if (result < 0)
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n",
               first.month, first.day, first.year,
               second.month, second.day, second.year);
    else if (result > 0)
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n",
               second.month, second.day, second.year,
               first.month, first.day, first.year);
    else
        printf("dates are the same.\n");

    return 0;
}
