#include<stdio.h>
void main()
{
	float marks;
	printf("Please enter your marks: ");
	scanf("%f",&marks);
	if(marks>75)
	{
		printf("\nDistinction");
	}
	else if(marks>65)
	{
		printf("\nFirst Class");
	}
	else if(marks>55)
	{
		printf("\nSecond Class");
	
	}
	else if(marks>=40)
	{
		printf("\nPass Class");
	}
	else
	{
		printf("Fail");
	}
	
}