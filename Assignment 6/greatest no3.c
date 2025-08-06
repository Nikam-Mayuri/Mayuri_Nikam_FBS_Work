#include <stdio.h>

int findGreatest();  // Function declaration

void main()
{
    int max = findGreatest();
    printf("Greatest number is: %d\n", max);
}

int findGreatest()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

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
