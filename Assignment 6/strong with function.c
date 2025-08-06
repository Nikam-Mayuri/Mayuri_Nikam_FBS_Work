#include<stdio.h>
void strong();
void main()
{
	strong();
}
void strong()
{
	 int num, temp, digit, sum = 0, i, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Loop to extract each digit
    while (num > 0) 
	{
        digit = num % 10;

        // Calculate factorial of the digit
        fact = 1;
        i = 1;
        while (i <= digit) 
		{
            fact *= i;
            i++;
        }

        sum =sum+fact;
        num = num / 10;
    }

    
    if (sum == temp) 
	{
        printf("%d is a Strong Number.\n", temp);
    } else {
        printf("%d is not a Strong Number.\n", temp);
    }
}