#include<stdio.h>
void fact();                  //function declaration
void main()
{
fact();
}
void fact()
{
		int num,i=1;
	long long factorial = 1;
	printf("Enter the number: ");
	scanf("%d",&num);
	
    if (num < 0) 
	{
        printf("\nFactorial is not defined for negative numbers.\n");
        return;
    }
    while (i <= num)
	 {
        factorial = factorial * i;
        i++;
    }
    printf("\nOutput: The number is %d and the factorial is %lld",num,factorial);
}