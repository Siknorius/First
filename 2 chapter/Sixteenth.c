#include <stdio.h>

int main(void)
{
    float cups, pints, ounces, tablespoons, teaspoons;

    printf("Enter number of cups:\n");
    scanf("%f", &cups);

    pints = cups / 2;
    ounces = cups * 8;
    tablespoons = ounces * 2;
    teaspoons = tablespoons * 3;

    printf("%.2f cups = %.2f pints\n", cups, pints);
    printf("%.2f cups = %.2f ounces\n", cups, ounces);
    printf("%.2f cups = %.2f tablespoons\n", cups, tablespoons);
    printf("%.2f cups = %.2f teaspoons", cups, teaspoons);
    getchar();getchar();

    return 0;
}