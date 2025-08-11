#include <stdio.h>

int main()
{
    double base, result = 1;
    int exponent;

    // Input base and exponent
    printf("Enter base: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // Calculate power using loop
    for (int i = 1; i <= exponent; i++)
    {
        result *= base;
    }

    printf("%.2lf ^ %d = %.2lf\n", base, exponent, result);

    return 0;
}
