#include <stdio.h>

void checkTriangle(int a, int b, int c);  // Function declaration

void main()
{
    int x, y, z;
    printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &x, &y, &z);

    checkTriangle(x, y, z);
}

void checkTriangle(int a, int b, int c)
{
    if (a == b && b == c)
        printf("Triangle is: Equilateral\n");
    else if (a == b || b == c || a == c)
        printf("Triangle is: Isosceles\n");
    else
        printf("Triangle is: Scalene\n");
}
