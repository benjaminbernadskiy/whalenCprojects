#include <stdio.h>

struct dialing_code {
    char name[40];
    int code;
};

int main(void)
{
    const struct dialing_code country_codes[] = {
        {"Argentina", 54}, {"Bangladesh", 880},
        {"Brazil", 55}, {"Burma (Myanmar)", 95},
        {"China", 86}, {"Colombia", 57},
        {"Congo, Dem. Rep. of", 243}, {"Egypt", 20},
        {"Ethiopia", 251}, {"France", 33},
        {"Germany", 49}, {"India", 91},
        {"Indonesia", 62}, {"Iran", 98},
        {"Italy", 39}, {"Japan", 81},
        {"Mexico", 52}, {"Nigeria", 234},
        {"Pakistan", 92}, {"Philippines", 63},
        {"Poland", 48}, {"Russia", 7}, {"South Africa", 27},
        {"South Korea", 82}, {"Spain", 34},
        {"Sudan", 249}, {"Thailand", 66},
        {"Turkey", 90}, {"Ukraine", 380},
        {"United Kingdom", 44}, {"United States", 1},
        {"Vietnam", 84}
    };
    int code;
    int i;
    int count = sizeof(country_codes) / sizeof(country_codes[0]);

    printf("Enter dialing code: ");
    if (scanf("%d", &code) != 1) {
        printf("wrong input.\n");
        return 1;
    }

    for (i = 0; i < count; i++) {
        if (country_codes[i].code == code) {
            printf("Country: %s\n", country_codes[i].name);
            return 0;
        }
    }

    printf("code not found.\n");
    return 0;
}