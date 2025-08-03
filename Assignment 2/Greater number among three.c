#include<stdio.h>
void main()
{
	int a=10,b=12,c=8;
	if(a>b)
	{
		if(a>c)
		{
			printf("a is greater");
		}
			else
			{
				printf("a is small");
			}
	}
	else
	{
		if(b>c)
		{
			printf("b is greater");
		}
		else
		{
			printf("b is small");
		}
	}

}