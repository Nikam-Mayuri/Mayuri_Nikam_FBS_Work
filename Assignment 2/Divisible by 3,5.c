#include<stdio.h>
void main()
{
	int num;
	printf("Please enter a number: ");
	scanf("%d",&num);
	if(num%3==0)
	{
		if(num%5==0)
		{
			printf("\nNumber is divisible by 3 and 5 both.");
		}
		else
		{
			printf("\nNumber is divisible by 3 but not divisible by 5.");
		}
		
	}
	else if(num%3!=0)
	{
		if(num%5==0)
		{
			printf("\nNumber is not divisible by 3 but divisible by 5.");
		}
		else
		{
			printf("\nNumber is not divisble by 3 and 5.");
		}
	
	}
	
}