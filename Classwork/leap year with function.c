#include<stdio.h>
void ly();                                      //function declaration
void main()
{
	ly();                                       //function call
}
void ly()                                       //function definition
{
		int year=2014;
	if(year%400==0)
	{
		printf("%d is a leap year",year);
	}
	else if(year%100==0)
	{
		printf("%d is not a leap year",year);
	}
	else if(year%4==0)
	{
		printf("%d is a leap year",year);
	}
	else
	{
		printf("%d is not a leap year",year);
	}
}