#include <stdio.h>

char* checkTriangle(int a, int b, int c);  // Function declaration

void main()
{
    int x, y, z;
    printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &x, &y, &z);

    char* result = checkTriangle(x, y, z);
    printf("Triangle is: %s\n", result);
}

char* checkTriangle(int a, int b, int c)
{
    if (a == b && b == c)
        return "Equilateral";
    else if (a == b || b == c || a == c)
        return "Isoscel
