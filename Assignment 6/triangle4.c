#include <stdio.h>

void checkTriangle();  // Function declaration

void main()
{
    checkTriangle();
}

void checkTriangle()
{
    int a, b, c;
    printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a == b && b == c)
        printf("Triangle is: Equilateral\n");
    else if (a == b || b == c || a == c)
        printf("Triangle is: Isosceles\n");
    else
        printf("Triangle is: Scalene\n");
}
