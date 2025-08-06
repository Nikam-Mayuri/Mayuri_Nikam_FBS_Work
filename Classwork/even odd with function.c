#include<stdio.h>
void eo();                      //function declaration
void main()
{
	eo();              //function call
}
void eo()                          //function definition
{
	int no=8;
	if(no%2==0)
	{
		printf("8 is an even number.");
	}
	else
	{
		printf("8 is an odd number.");
	}
}