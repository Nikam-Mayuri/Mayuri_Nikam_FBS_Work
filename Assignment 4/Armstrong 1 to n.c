#include<stdio.h>

void main()
{
    int j;

    printf("Strong numbers between 1 and 1000 are:\n");

    for(j = 1; j <= 1000; j++)
    {
        int num = j;
        int sum = 0;

        while(num > 0)
        {
            int rem = num % 10;
            int fact = 1;

            for(int i = 1; i <= rem; i++)
            {
                fact *= i;
            }

            sum += fact;
            num /= 10;
        }

        if(sum == j)
        {
            printf("%d\n", j);
        }
    }

    return 0;
}
