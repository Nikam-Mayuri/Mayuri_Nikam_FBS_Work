#include <stdio.h>

void findGreatest(int a, int b, int c);  // Function declaration

void main()
{
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &x, &y, &z);

    findGreatest(x, y, z);
}

void findGreatest(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
            printf("Greatest number is: %d\n", a);
        else
            printf("Greatest number is: %d\n", c);
    }
    else
    {
        if (b > c)
            printf("Greatest number is: %d\n", b);
        else
            printf("Greatest number is: %d\n", c);
    }
}
