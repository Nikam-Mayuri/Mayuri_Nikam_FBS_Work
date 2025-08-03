#include<stdio.h>
void main()
{
	int a=4;
	if(a%2==0)
	{
		if(a%3==0)
		{
			printf("Div by 6");
		}
		else
		{
			printf("Even");
		}
	}
	else
	{
		printf("Odd");
	}
}