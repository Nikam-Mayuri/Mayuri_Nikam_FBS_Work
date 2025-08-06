#include <stdio.h>

char* checkTriangle();  // Function declaration

void main()
{
    char* result = checkTriangle();
    printf("Triangle is: %s\n", result);
}

char* checkTriangle()
{
    int a, b, c;
    printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a == b && b == c)
        return "Equilateral";
    else if (a == b || b == c || a == c)
        return "Isosceles";
    else
        return "Scalene";
}
