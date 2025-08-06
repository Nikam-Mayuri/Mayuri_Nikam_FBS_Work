#include <stdio.h>

int findGreatest(int a, int b, int c);  // Function declaration

void main()
{
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &x, &y, &z);

    int max = findGreatest(x, y, z);
    printf("Greatest number is: %d\n", max);
}

int findGreatest(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
            return a;
        else
            return c;
    }
    else
    {
        if (b > c)
            return b;
        else
            return c;
    }
}
